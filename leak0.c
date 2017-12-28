#include <stdlib.h>
#include <stdio.h>

#define NUMS_INT 4

int main( void )
{
    // put some memory on the heap
    
    int* int_block = malloc( NUMS_INT * sizeof( int ));
    
    // put the numbers int_block[0, NUMS_INT] in the int block
    for( int i = 0; i < NUMS_INT; i++)
        int_block[ i ] = i;
        
    // oops you're supposed to free the whole block at once! 
    for( int i = 0;  i < NUMS_INT; i++)
        free( &int_block[i]);
    
    
    return 0;
}