/**
 * helpers.c
 *
 * Computer Science 50
 * Problem Set 3
 *
 * Helper functions for Problem Set 3.
 */
       
#include <cs50.h>

#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */

// int search( int key, int array[], int max)
bool search(int value, int values[], int n)
{
    // TODO: implement a searching algorithm
    
    int midpoint = 0;
    int min = 0;
    
    while ( (values[midpoint] != value ) && (( n - min) != 1) )
    {
    
        midpoint = min + ( n - min ) / 2;
    
        if ( values[midpoint] < value )
            min = midpoint ;
        else if ( values[midpoint] > value )
            n = midpoint ;
        
    }
    
    if ( values[midpoint] == value )
        return true;
    else return false;
}


/**
 * Sorts array of n values.
 */

void sort( int values[], int n)
{
    
    // TODO: implement an O(n^2) sorting algorithm
     
    int change;
    int pass;
    int cur = 0;
    
    pass = n;
    
    do
    {
        cur  = 0;
        
        for( int i = 0; i < pass - 1; i++  )
        {
            
            if ( values[i] > values[i + 1])
                {
                    cur = 1;
                    change = values[i];
                    values[i] = values[i + 1];
                    values[i + 1] = change;
                    
                }
        }
    pass--;    
    
   
    }
    while( cur );
    
        
    return;    
} 















