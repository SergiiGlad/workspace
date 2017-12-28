#include <stdio.h>

int sort_insert( int array[], int size);

int main( int argc, char* argv[] )
{
    int array[] = { 8,0,1,3,4,9,2,5,7,6,7,9,10 };
    
    int size;
    
    int go;
    
    size = sizeof(array) / sizeof(array[0]);
    
    printf("Before :\n");
    
    for( int i=0; i < size; i++)
        printf("%d, ", array[i]);
    
    go = sort_insert( array, size );
    
    printf("\nAfter :\n");
    
    for( int i=0; i < size; i++)
        printf("%d, ", array[i]);
        
    printf("\n Pass: %d\n", go);
    
    
}


int sort_insert( int array[], int size)
{
    int go = 0;
    int element;
    int j;
    int change; 
    
    
    for( int i = 1; i < size - 1; i++)
    {
        element = array[i];
        j = i;
        go++;
        while( j > 0 && array[ j - 1] > element)
            {
                change = array[j];
                array[j] = array[j - 1];
                array[j - 1] = change;
                j--;
                go++;
            }
        array[ j ] = element;
        
    }

    return go;
}