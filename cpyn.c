#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main()
{
    int m[] = {1,2,3,4,5,6,7,8,9,0};
    
    int* nm = m;
    
    
    
    nm = malloc( 100 * sizeof( int ) );
    
    if ( nm == NULL )
    {
        printf("Not enought memory\n");
        return 2;
    }
    
    for( int i = 0; i < ( sizeof( m ) / sizeof( int )) ; i++)
        printf("%i", m[i] );
    
     printf("\nsizeof : %lu\n", sizeof( m ) / sizeof( int ) );    
    
    int j = 0;
    
    while( m[j] != 0 )
        {
            nm[j] = m[j];
            j++;
        }    
    
    printf("j = %d\n", j); 
      
      for( int i = 0; i < 11; i++)
        printf("%i", nm[i] );
    
     printf("\nsizeof : %lu\n", sizeof( nm ) );  
    
    
    return 0;
}