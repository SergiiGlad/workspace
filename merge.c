#include <stdio.h>

int sort_merge( int array_a[], int size_a, int array_b[], int size_b, int array_c[], int size_c );

int main( void )
{
    int array[] = { 8,0,3,1,9,4,5,2,7,6,7,9,11,10 };
    
    int* array_a;
    
    int* array_b;
    
    int* array_d;
    
    int array_c[14] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    
    int array_e[14] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    
    int size_a, size_b, size_c, size;
    
    int go = 0;
    
    size_a = sizeof(array_a) / sizeof(array_a[0]);
    
    size_b = sizeof(array_b) / sizeof(array_b[0]);
    
    size_c = 14;
    
    size = sizeof(array) / sizeof(array[0]); 
    
    // array_a[0] = array[0];
    
    // array_b[0] = array[1];
    
    int j;
    
    int n = 1;
    do
    {
        j = 0;
        while ( j < size )
            {
                array_a = &array[j];
                array_b = &array[j + n];
                array_d = &array_c[j];
                go = sort_merge( array_a, n, array_b, n, array_d, n * 2);
                j = j + n * 2;
            };
    
     for( int i = 0; i < size; i++)
        printf("%d ", array_c[i]);
    
    printf("\n");
    
    n = n * 2;
    }
    while( n < size / 2);
    
    n = 2;
        j = 0;
        while ( j < size  )
            {
                array_a = &array_c[j];
                array_b = &array_c[j + n];
                array_d = &array_e[j];
                go = sort_merge( array_a, n, array_b, n, array_d, n * 2);
                j = j + n * 2;
            };
    
    
        
        
    for( int i = 0; i < size; i++)
        printf("%d ", array_e[i]);
    
     printf("\n");
    
    n = 4;
    
        j = 0;
        while ( j < size )
            {
                array_a = &array_e[j];
                array_b = &array_e[j + n];
                array_d = &array_c[j];
                go = sort_merge( array_a, n, array_b, n, array_d, n * 2);
                j = j + n * 2;
            };
    
     for( int i = 0; i < size; i++)
        printf("%d ", array_c[i]);
    
    printf("\n");
    
    n = 8;
        j = 0;
        while ( j < size  )
            {
                array_a = &array_c[j];
                array_b = &array_c[j + n];
                array_d = &array_e[j];
                go = sort_merge( array_a, n, array_b, n, array_d, n * 2);
                j = j + n * 2;
            };
    
    
        
        
    for( int i = 0; i < size; i++)
        printf("%d ", array_e[i]);
    
     printf("\n");
    
}


int sort_merge( int array_a[], int size_a, int array_b[], int size_b, int array_c[], int size_c )
{
    int a = 0, b = 0;
    
    int go = 0;
    
    for( int i = 0; i < size_c; i++)
    {
        
        // if( a < size_a && b < size_b )
        
        
        if (array_a[a] < array_b[b] && a < size_a )
        {
        //    printf("a %d array_a %d\n", a, array_a[a]);
            array_c[i] = array_a[a++];
        }
        else if ( b < size_b )
            { 
            //    printf("b %d array_b %d\n", b, array_b[b]); 
                array_c[i] = array_b[b++];
            }
        else
            array_c[i] = array_a[a++];
        
            
        // printf("%d %d \n", i, array_c[i]);
        
        go++;
    }  
    
      
    return go;
}