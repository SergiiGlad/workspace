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
#include <cs50.h>


int main(int argc, char* argv[])
{
    FILE* fp;
    
    char *str = malloc( 27 * sizeof(char) );
    
    if ( str == NULL)
        {
            printf("Not enought memory\n");
            return 1;
        }
    
    str = strcpy( str, "abcdefghijklmnopqrstuvwxyz");
    
    fp = fopen("proba.c", "w");
    
    if ( fp == NULL )
        {
            printf("Could not create file:\n");    
            return 2;
        }
        
    fwrite(  str, 27 , 1 , fp);
    
    fclose( fp );
    
    fp = fopen( "proba.c", "r");
   
    if ( fp == NULL )
        {
            printf("Could not create file:\n");    
            return 2;
        }
    
        char * outline;
        
        outline = malloc ( 11 );
        
        if ( outline == NULL)
        {
            printf("Not enought memory\n");
            return 1;
        }
        
        int i = 0 ;
        
        while (  fgets( outline, 4 , fp ) != NULL )
        {
            
            printf("%s\n", outline);
            i++;
            if ( i > 50 )
            {
                printf("LOOP\n");
                return 0;
            }
        }
    
    printf("\n");
    
    fclose ( fp );
    
    // char name[8];
    
    /*
    for ( int i = 1; i < 4; i++)
    {
        sprintf( name, "%.3d.jpg", i);
        fp = fopen( name, "a");
        fgets( outline, sizeof(outline), fp );
        fclose ( fp );
    }
    
    */// 
    
    string stamp1 = "ffd8ffe0";
    string stamp2 = "ffd8ffe1";
    
    string s1 = "First head jpg is ffd8ffe0";
    string s2 = "Second head jpg is ffd8ffe1";
    
    if ( strcmp ( stamp1, s1) == 0 )
        printf("First head jpg is %s", stamp1);
    
    if ( strcmp ( stamp2, s2) == 0 )
        printf("Second head jpg is %s", stamp2);        
    
    printf("\n");
    
    free( str );
}
