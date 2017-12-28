#include <stdio.h>

int main()
{
    char* mas = "Hello";

    for( int i = 0; i < 7; i++)
        {
            printf("%p\n", mas );
        
            mas++;
        }
    
    printf("%s\n", mas);
    
    
    
}