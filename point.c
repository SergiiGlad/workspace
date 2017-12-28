#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

int main()
{
    int* a;
    const int* b = malloc( sizeof(int) );

    int n = 10;
    printf("\nValue of n is : %d",n);
    printf("\nValue of &n is : %p\n",&n);
    
    char* s = "A";
    printf("Address s:%p\n", s );

    
    
    a = malloc( sizeof(int) );
    
   // a = 0x1004050;
    
    *a = 48;
    
    printf("address a = %p\n", a);
    printf("address a = %p\n", b);
    
    printf("Meaning a = %i\n", *a);
    printf("Meaning a = %i\n", *b);
    
    char* c_ptr;
    c_ptr = malloc(sizeof(char));
    *c_ptr = 'A';
    printf("c_ptr: %p\t*c_ptr: %c\t and also address c_ptr: %s\n",c_ptr,*c_ptr,c_ptr);

    getch();
    
}