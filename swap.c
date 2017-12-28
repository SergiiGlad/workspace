#include <stdio.h>
#include <stdlib.h>

//prototype function

void swap( int* a, int* b);

int main(void)
    {
        int a = 1, b = 2;
        
        int* n = NULL;
        n = malloc( sizeof(n));
        *n = 4;
        
        printf("n is %d\n", *n );
        
        swap(&a, &b);
        
        printf("a is %d\n", a);
        printf("b is %d\n", b);
        
    }
    

void swap( int* a, int* b)
    {
        int tmp;
        tmp = *a;
        *a = *b;
        *b = tmp; 
    };