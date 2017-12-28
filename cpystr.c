#include <stdio.h>
#include <string.h>
#include <stdlib.h>


#define NUM 100
typedef char chars100[ NUM ];

int main()
{
    chars100 m = "New string works";
    
    chars100 *nm, *p = &m, *pm;
    
    
    
    nm = malloc( 100 * sizeof(char) );
    
    pm = nm;
    
    if ( nm == NULL )
    {
        printf("Not enought memory\n");
        return 2;
    }
    
    printf("String: %s\n strlen : \n sizeof : %lu\n", m, sizeof( m ));
    
    //int i = 0;
    
    while(  ( **pm++ = **p++ ) );  
        
    
    printf("String: %s \n strlen : \n sizeof *: %lu\n  ", *nm, sizeof( *nm ));
    
    
    return 0;
}