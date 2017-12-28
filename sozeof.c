#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    string s;
    int i;
    
    do 
    {
        printf("Please give me a string:");
        s = GetString();
    }while(strlen(s) < 1 );
    
    i = sizeof(s);
    printf("Size of string: %s is sizeof %i\n",s,i);
    i = strlen(s);
    printf("Size of string: %s is strlen %i\n",s,i);
    
}