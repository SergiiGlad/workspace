/**
 * copy.c
 *
 * Computer Science 50
 * Problem Set 4
 *
 * Copies a BMP piece by piece, just because.
 */
       
#include <stdio.h>
#include <stdlib.h>

#include "bmp.h"

int main(int argc, char* argv[])
{
    // ensure proper usage
    if (argc != 4)
    {
        printf("Usage: ./copy size infile outfile\n");
        return 1;
    }

    
    // remember size and filenames
    char* infile = argv[2];
    char* outfile = argv[3];
    int size = atoi( argv[1] );
    
    // size 0 rewrite as 1
    if ( size == 0 )
        size = 1;
        
    if ( size >= 100 )
        return 1;
    
    // open input file 
    FILE* inptr = fopen(infile, "r");
    if (inptr == NULL)
    {
        printf("Could not open %s.\n", infile);
        return 2;
    }

    // open output file
    FILE* outptr = fopen(outfile, "w");
    if (outptr == NULL)
    {
        fclose(inptr);
        fprintf(stderr, "Could not create %s.\n", outfile);
        return 3;
    }

    // read infile's BITMAPFILEHEADER
    BITMAPFILEHEADER bf;
    fread(&bf, sizeof(BITMAPFILEHEADER), 1, inptr);

    // read infile's BITMAPINFOHEADER
    BITMAPINFOHEADER bi;
    fread(&bi, sizeof(BITMAPINFOHEADER), 1, inptr);

    // ensure infile is (likely) a 24-bit uncompressed BMP 4.0
    if (bf.bfType != 0x4d42 || bf.bfOffBits != 54 || bi.biSize != 40 || 
        bi.biBitCount != 24 || bi.biCompression != 0)
    {
        fclose(outptr);
        fclose(inptr);
        fprintf(stderr, "Unsupported file format.\n");
        return 4;
    }

    
    
    // remember original BITMAP INFO HEADER
    
    BITMAPINFOHEADER obi = bi;
    
    // determine padding for scanlines
    int padding =  (4 - (obi.biWidth * sizeof(RGBTRIPLE)) % 4) % 4;
    
    
    
    bi.biWidth = obi.biWidth * size;
    bi.biHeight = obi.biHeight * size;
    
    int padding1 =  (4 - (bi.biWidth * sizeof(RGBTRIPLE)) % 4) % 4;
    
    bi.biSizeImage = ( bi.biWidth * sizeof( RGBTRIPLE ) + padding1 ) * abs ( bi.biHeight ) ;
    
  
    //bi.biSizeImage = bi.biSizeImage  * sizeof(RGBTRIPLE);
    bf.bfSize = bi.biSizeImage + 54;
    
    // bi.biSize = 40;
    
    // write outfile's BITMAPFILEHEADER
    fwrite(&bf, sizeof(BITMAPFILEHEADER), 1, outptr);

    // write outfile's BITMAPINFOHEADER
    fwrite(&bi, sizeof(BITMAPINFOHEADER), 1, outptr);
    
    
    
    // new size width
    
    
    
    
    // iterate over infile's scanlines
    
    // Remember row
    
    RGBTRIPLE  *row, *f_row;
    
    int new_r;
    
    new_r = sizeof(RGBTRIPLE) * bi.biWidth;
    
    f_row = malloc ( new_r );
    
    if ( f_row == NULL)
        {
            printf("Not enought memory\n");
            return 1;
        }
    
    
    
    for (int i = 0, obiHeight = abs(obi.biHeight); i < obiHeight; i++)
    
    // for ( int i1 = 0; i1 < size; i1++)
    {
        row = f_row;
        
        // iterate over pixels in scanline
        for (int j = 0; j < obi.biWidth; j++)
        {
            // temporary storage
            RGBTRIPLE triple;

            // read RGB triple from infile
            
            fread( &triple, sizeof(RGBTRIPLE), 1, inptr);
            
            for( int j1 = 0; j1 < size; j1++)
                {
                    *row = triple;
                    row++;
                };
                
        }        
            // write RGB triple to outfile
            // repeat SIZE times
            //   for( int j1 = 0; j1 < size; j1++)
            //    fwrite(&triple, sizeof(RGBTRIPLE) , 1 , outptr);
        
       
        // write size row in file
        for( int j2 = 0; j2 < size; j2++)
        {
            fwrite( f_row, new_r  , 1 , outptr);
            
            //then add it back (to demonstrate how)
            for (int k = 0; k < padding1; k++)
            {
              fputc(0x00, outptr);
            }
        
        }
        
        // skip over padding, if any
        fseek(inptr, padding, SEEK_CUR);  
    
    }
    // close infile
    fclose(inptr);

    // close outfile
    fclose(outptr);

    free( f_row );
    
    
    // that's all folks
    return 0;
}
