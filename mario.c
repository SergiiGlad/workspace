/**
new program marion
*/
#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n = 0;
    
  
    do
    {
        printf("Height: ");
        n = GetInt();
       
    } while ( n < 0 || n > 23 );
   
    for (int i = 0; i < n ; i++)
    {
        // print spaces
        for ( int j = 0; j < n - i - 1 ;j++)
        {
            printf(" ");
        }
        // print hashes
        for ( int j = 0;j < i + 2; j++)
        {
            printf("#");
        }
        
        // print new line
        printf("\n");    
    }
}