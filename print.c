#include <stdio.h>
#include <cs50.h>
#include <string.h>

void print( char* s)
{
    printf( "%s\n", s );
    print( s );
}

int main( void )
    {
        string s;
        
        
        
        do
        {
            printf("Input string:");
            s = GetString();
        }
        while ( strlen( s ) == 0);
        
        if (s == NULL)
            return -1;
            
        printf( "%s\n", s );
        
        print( s );
    }