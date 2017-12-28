#include <stdio.h>

int factorial( int );

int main()
{
    int i;
    
    printf("enter number for calculation factiroal\n");
    scanf("%d", &i);
    
    i = factorial( i );
    
    printf("factorial : %d\n" , i);
    
    return 0;
}

int factorial( int n)
{
    if ( n == 1)
        return 1;
    else
        return n * factorial(n-1);
}