#include <stdio.h>
#include <string.h>

void f( char* bar);


int main( int argc, char* argv[])
{
    main( 1, &argv[1] );
}

void f( char* bar)
{
    char c[12];
    strncpy(c, bar, strlen( bar ));
}