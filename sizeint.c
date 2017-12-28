#include <stdio.h>
#include <stdlib.h>

#define NUM 10
typedef int mas_int[ NUM ];

int main()
{
    mas_int mas;
    printf("sizeof mas:%lu\n", sizeof( mas ));
    
    mas_int *p ;
    
    p = malloc( 80 );
    
     printf("sizeof p:%lu\n", sizeof( *p ));
     
    char (*s)[100] = malloc( sizeof( char[100] ) );
    printf( "%lu byte pointer to %lu bytes of size %lu elements\n",
    sizeof s, sizeof *s, sizeof **s );

    char* m = malloc(sizeof(char)*100);  
    
     printf("sizeof m:%lu\n", sizeof( m ));
}