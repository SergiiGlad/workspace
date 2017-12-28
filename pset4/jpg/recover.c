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

int main(int argc, char* argv[])
{
    
    // source file
    FILE* fp;
    
    // output file
    FILE* fnew = NULL;
    
    
    // name for output file
    char name_file[8];
    int num = 0;
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
    
    while (  fread( block, SIZEBLOCK , 1, fp ) != 0 )
    {
        
        if ( (strncmp( stamp1, block, 4) == 0) || (strncmp( stamp2, block, 4) == 0)  )
        {
            if ( fnew != NULL )
                {
                    fclose( fnew );
                }
                
                
                sprintf( name_file, "%.3d.jpg", num++ );
                
                fnew = fopen( name_file, "a");
                 
                if ( fnew == NULL )
                {
                    printf("Could not create file:\n");    
                    return 2;
                }
                
        }
        
    if ( fnew != NULL) 
        fwrite(  block, SIZEBLOCK , 1 , fnew);
                
    
    }
    
    fclose ( fp );
    
    fclose ( fnew );
    
    free( block );
        
}


int hashing_function(char* word) 
{ 
 unsigned int hash = 0; 
 for (int i = 0, n = strlen(word); i < n; i++) 
     hash = (hash << 2) ^ word[i]; 
     return hash % HASHTABLE_SIZE; 
} 
