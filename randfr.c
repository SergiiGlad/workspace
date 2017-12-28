#define _XOPEN_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <cs50.h>

// constant
#define LIMIT 65536

int main( int argc, char* argv[])
{
    
    
    // check if exist arguments command line
    if ( argc != 2 )
    {
        printf("Usage: generate file which needs read\n");
        return 1;
    }
    
    // open a new document
    
    FILE* fp = fopen( argv[1], "r");
    
    // check for successful open
    
    if ( fp == NULL )
    {
        printf("Couldn't create %s\n", argv[1]);
        return 2;
    }

    
    // storage space for each line of text
    char output[5];
    
/*    Alternaty  correct read file

     for ( int i = 1; fgets( output, sizeof( output), fp ) != NULL; i++ )
        printf("Line %02d: %s\n", i, output);
    
*//    
    
    int j = 1;
    while ( !feof(fp) )
    {
        fgets( output, sizeof( output), fp );
        printf("Line %02d: %s\n", j, output);
        j++;
    }
    
    
    // close the file and end succefully
    fclose( fp );
    
    // success
    return 0;
    
    
}
