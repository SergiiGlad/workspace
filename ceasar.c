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
        printf("Invalid input data\n");
        return 1;
    }
    
    k = atoi(argv[1]);
    
    do
    {
        s = GetString();
    }
    while(strlen(s) == 0);
    
    len = strlen(s);
    
    for(int i = 0; i < len; i++)
    {
        
        if ( isalpha(s[i]) )
        {
            if ( isupper(s[i]) ) 
                p = UP + (s[i] - UP + k) % 26;
            
            else 
                p = LOW + (s[i] - LOW + k) % 26;
        }
        else 
            p = s[i];    
        
        
        printf("%c", p);
    }   
    
    // corect ending function main
    printf("\n");
    return 0;
}
 