/**
 * This is program useing code ROT
 *
 * 
*/
 
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <cs50.h>
#include <ctype.h>

#define UP 65
#define LOW 97

int main(int argc, string argv[])
{
    // argument k
    int k;
    
    // length string
    int len;
    
    // string
    string s;
    
    // output char
    int p;
    
    if (argc != 2) 
    {
        printf( "Invalid input data\n");
        return 1;
    }
    
    k = atoi(argv[1]);
    
    do
    {
        s = GetString();
    }
    while(strlen(s) == 0);
    
    len = strlen(s);
    
    int i = 0;
    int up;
    
    while( s[i] != '\0')
    {
        
        up = toupper(s[i]);
        if( up >= 'A' && up <= 'M') 
            p = s[i] + k;
        else if ( up >= 'N' && up <= 'Z')
            p = s[i] - k;
        else 
            p = s[i];    
        if ( p > 'z' )
            p = p - 26;
        
        i++;
        printf("%c", p);
    }   
    
    // corect ending function main
    printf("\n");
    return 0;
}
 