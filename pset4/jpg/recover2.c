/**
 * recover.c
 *
 * Computer Science 50
 * Problem Set 4
 *
 * Recovers JPEGs from a forensic image.
 * 
 * stamp fo jpeg
 * 0xff 0xd8 0xff 0xe0
 * 0xff 0xd8 0xff 0xe1
 * 
 * Each represents 512 bytes
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZEBLOCK 512
#include <cs50.h>
#include <stdint.h>
typedef uint8_t  BYTE;


int main(int argc, char* argv[])
{
    
    // source file
    FILE* fp;
    
    // output file
    FILE* fnew = NULL;
    
    
    // name for output file
  
    
    char* block;
    
    
   fp = fopen("card.raw", "r");
    
    if ( fp == NULL )
        {
            printf("Could not create file:\n");    
            return 2;
        }
    
    block = malloc ( SIZEBLOCK ); // 512 byte
    
    if ( block == NULL)
        {
            printf("Not enought memory\n");
            return 1;
        }
        
     char stamp1[] = { 0xff, 0xd8, 0xff, 0xe0 };
     char stamp2[] = { 0xff, 0xd8, 0xff, 0xe1 };

    
    
    
    int i = 0;
    
    while( fgets( block, SIZEBLOCK , fp) != EOF ) 
    {
    
   
   // strncpy( stamp3, block, 4);
    //printf("%d %s\n", i, stamp3 );
    
    i++;
    
    if ( (strncmp( stamp1, block, 4) == 0) || (strncmp( stamp2, block, 4) == 0)  )
    {
        printf("HEAD stamp exist %d\n", i);    
        
        fnew = fopen( "000.txt", "w");
           if ( fnew == NULL )
                {
                    printf("Could not create file:\n");    
                    return 2;
                }
                
         
         
        fwrite(  block, SIZEBLOCK , 1 , fnew);
    }
    //printf("%.4s\n", block);      
                    
               
                 
               
        
        
    
        
        
    }
   
    
    fclose ( fp );
    
    fclose ( fnew );
    
    free( block );
        
}
