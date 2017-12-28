#include <stdio.h>
#include <string.h>


int main( int argc, char **argv)
{
    if ( argc != 2)
    {    
        printf("Run: freq string\n");
        return 1;
    }
    
    int fra[26];
    
    int frA[26];
    
    int ind;
    
    for( int i = 0 ; i < 26; i++)
        fra[ i ] = frA[ i ] = 0;
    
    for( int i = 0; i < strlen( argv[1] ); i++)
        {
        if( argv[1][i] < 'Z'  )   
        {
            ind = argv[1][i] - 'A'; 
            frA[ ind ] = frA[ ind ] + 1;
        }
        else 
        {
            ind = argv[1][i] - 'a';   
            fra[ ind ] = fra[ ind ] + 1;
        }   
            
        }
        
    for( int i = 0; i < 26; i++)
    if ( fra[i] != 0 )    
        printf("%c : %d\n", 'a'+ i, fra[i]);
    
    
    
    for( int i = 0; i < 26; i++)
    if ( frA[i] != 0 )    
        printf("%c : %d\n", 'A'+ i, frA[i]);
    
    printf("\nAnother 0\n");    
}