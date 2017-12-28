/**

This programa is algoritm Vigenere

*/

#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    
    // length argv[]
    int len;
    
    // length key
    int len_key;
    
    // source string
    string str;
    
    // k is key
    int k = 0;
    
    // output char
    int p;
    
    if ( argc != 2 )
    {
        printf("Invalid input data\n");
        return 1;
    }
    if ( argv == NULL )
        return 1;
    
    len_key = strlen( argv[1] );
    
    for(int i = 0; i < len_key; i++)
        if ( isalpha(argv[1][i]) == false)
        {
            printf("Input not alpha\n");
            return 1;
        }
            
    // printf("You entered right key: %s \n", argv[1]);
    
    do
    {
    // printf("Input string: ");
        str = GetString();
    }
    while (strlen( str ) == 0);
    
    // return rigth code = 0
    
    len = strlen( str );
    
    k = 0;
    
    // position char key
    int pos = 0;
    
    for(int i = 0; i < len; i++)
    {
        
        if ( isalpha(str[i]) )
        {
            // calculate pos = 0 .. 25
            
            if ( isupper( argv[1][k]) )
                pos = ( argv[1][k] - 'A' ) % 26;
            else
                pos = ( argv[1][k] - 'a' ) % 26;
                
            // next position key
            k = (k + 1) % len_key;
            
            if ( isupper(str[i]) ) 
                p = 'A' + (str[i] - 'A' + pos ) % 26;
            else 
                p = 'a' + (str[i] - 'a' + pos ) % 26;
        }
        else 
            p = str[i];    
        
    // printf("%d", k);    
        printf("%c", p);
    }   
    
    printf("\n");
    return 0;
}