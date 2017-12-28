#include <stdio.h>
#include <math.h>
#include <cs50.h>


int binarysearch( int key, int array[], int max)
{
    int midpoint = 0;
    int min = 0;
    
    while ( (array[midpoint] != key ) && (( max - min) != 1) )
    {
    
        midpoint = min + ( max - min ) / 2;
    
        if ( array[midpoint] < key )
            min = midpoint ;
        else if ( array[midpoint] > key )
            max = midpoint ;
        
    }
    
    if ( array[midpoint] == key)
        return midpoint;
    else return -1;
}


int main( void )
{
    int array[] = {0, 1, 2, 3, 4, 5, 6};
    int size;
    int count;
    
    size = (int)sizeof( array ) / 4;
    
    printf("Sizeof: %d\n", size );
    
    printf("Count : ");
    count = GetInt();
    
    for ( int i = 0; i < count; i++)
        printf("position: %d\n", binarysearch( i, array,  size ) );
    
}


