#include <stdio.h>
#include <strings.h>
#include <string.h>
#include <ctype.h>
#include <cs50.h>

int main(int argc, string argv[])
{
    for( int c = 'a'; c <= 'z' ; c++)
        printf("%c", c );
    
    printf("\n");
        
    string s = argv[1];
    
    for(int i = 0, n = strlen(s); i < n; i++)
            
                 s[i] >= 'a' ? s[i] = toupper(s[i]) : s[i] ;
            
        
    printf("Upper case: %s\n", s);
}