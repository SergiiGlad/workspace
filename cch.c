#include <stdio.h>
#include <string.h>


int main( int argc, char **argv)
{
        // char ch = 'a'; 
        
        char s;
        
        
        while( 1 )
        {
        printf("input char : ");
        scanf("%c", &s);
        
        printf("_____%c\n", argv[1][0]);
        
        printf("%c is %d\n", argv[1][0], argv[1][0] );
        
        }
}