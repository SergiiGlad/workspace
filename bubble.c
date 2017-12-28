#include <stdio.h>

int sortbubble( int array[], int size);

int main( int argc, char* argv[])
{
    //int array[] = { 8,0,1,3,4,9,2,5,7,6,7,9,100,0 };
    
    int array[] = { 8,0,1,3,4,9,2,5,7,6,7,9,10 };
    
    int size;
    
    int go;
    
    size = sizeof(array) / sizeof(array[0]);
    
    printf("size : %d\n", size);
    
    printf("Before :\n");
    
    for( int i=0; i < size; i++)
        printf("%d, ", array[i]);
    
    go = sortbubble( array, size );
    
    printf("\nAfter :\n");
    
    for( int i=0; i < size; i++)
        printf("%d, ", array[i]);
        
    printf("\n Pass: %d\n", go);
}

int sortbubble( int array[], int size)
{
     
    int change;
    int pass;
    int cur = 0;
    int go = 0;
    pass = size;
    
    do
    {
        cur  = 0;
        
        for( int i = 0; i < pass - 1; i++  )
        {
            go++;
            if ( array[i] > array[i + 1])
                {
                    cur = 1;
                    change = array[i];
                    array[i] = array[i + 1];
                    array[i + 1] = change;
                    
                }
        }
    pass--;    
    
   
    }
    while( cur );
    
        
    return go;    
} 