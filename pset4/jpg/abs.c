#include <stdio.h>

int main ()
{
   // for( int i = 0; i < 255; i++)
//        printf("%c", i);
        
    printf("\n");
    
    char stamp1[] = { 0xFF, 0xD8, 0xFF, 0xE0, 0 };
    char stamp2[] = { 0xFF, 0xD8, 0xFF, 0xE1, 0 };
    
    printf("%s", stamp1);
    printf("\n");
    
    printf("%s\n", stamp2);
    
    printf("size char %lu", sizeof(char));
    printf("\n");
    
    printf("char %c %c %c", 0xd8, 0xe0, 0xe1);
    printf("\n");
    
}