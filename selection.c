#include <stdio.h>


int sortc( int array[], int size);

int main( void )
{
    int array[] = { 8,0,1,3,4,9,2,5,7,6,7,9,10 };
    int size;
    int go;
    
    size = sizeof(array) / sizeof(array[0]);
    
    printf("size : %d\n", size);
    
    printf("Before :\n");
    
    for( int i=0; i < size; i++)
        printf("%d, ", array[i]);
    
    go = sortc( array, size);
    
    printf("\nAfter :\n");
    
    for( int i=0; i < size; i++)
        printf("%d, ", array[i]);
        
    printf("\nPass: %d\n", go);
    
}

int sortc( int array[], int size)
{
    int cur;
    int change;
    int go = 0;
    
    for( int i = 0; i < size; i++)
    {
        cur = i;    
        for( int j = i+1 ; j < size; j++ )
        {
            go++;
            if ( array[j] < array[cur] )
                cur = j;
        }        
        if ( cur != i )
            {
                change = array[i];
                array[i] = array[cur];
                array[cur] = change;
                
            }
            
    }    

    return go;
}