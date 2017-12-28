#define _XOPEN_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <cs50.h>

// constant
#define LIMIT 65536

int main( int argc, char* argv[])
{
    int rr; // random value
    
    // check if exist arguments command line
    if ( argc != 3 )
    {
        printf("Usage: generate file  n\n");
        return 1;
    }
    
    // open a new document
    
    FILE* fp = fopen( argv[1], "w");
    
    // check for successful open
    
    if ( fp == NULL )
    {
        printf("Couldn't create %s\n", argv[1]);
        return 2;
    }

    // convert argv[2] = n into integer number
    int n = atoi(argv[2]);
    
     // print n random number
    for (int i = 0; i < n; i++)
    {
        rr = (int) (drand48() * LIMIT);
        fprintf(fp, "%i ", rr);
    }
    
    // close the file and end succefully
    fclose( fp );
    
    // success
    return 0;
    
    
}
