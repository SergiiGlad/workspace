

#include <stdio.h>
#include <stdlib.h>

#define NUM_DAYS 5
typedef int days_t[ NUM_DAYS ];
#define SIZEOF_DAYS ( sizeof( days_t ) )

int main() {
    days_t  days;
    days_t *ptr; 

    ptr = malloc( sizeof( days_t ) * 10 );
    
   
    
    printf( "SIZEOF_DAYS:  %lu\n", SIZEOF_DAYS  );
    printf( "sizeof(days): %lu\n", sizeof(days) );
    printf( "sizeof(*ptr): %lu\n", sizeof(*ptr) );
    printf( "sizeof(ptr):  %lu\n", sizeof(ptr)  );

    return 0;
} 