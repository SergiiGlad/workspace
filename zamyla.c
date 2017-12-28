#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string s;
    int c;
    
    printf("Input string: ");
    s = GetString();
    
    if ( s != NULL)
    {
        c = 0;
        while( s[c] != '\0')
        {
            printf("%c\n", s[c] );
            c++;
                };
    } else
        printf("NULL\n");
}