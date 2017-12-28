/**
program greedy
*/

#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float n;
    int i;
    int k;
    
    // wait input amount
    do 
    {
        printf("How much change is owed?\n");
        n = GetFloat();
    }while( n <= 0 );
    
    // round to cents
    i = round(n * 100);
    n = 0;
    
   // how much 25 cent is owed
    k = i % 25;
    n = n + round (i / 25) ;
    
    // how much 10 cent is owed
    i = k % 10;
    n = n + round (k / 10) ;
   
    // how much 5 cent is owed
    k = i % 5;
    n = n + round (i / 5) ;
   
    // how much 1 cent is owed and print amount of coins
    i = round(n + k);
    printf("%d\n",i);
   
}