#include <stdio.h>
#include <string.h>
#include <cs50.h>

string change_space(string s)
{
    int l = strlen(s);
    for(int i = 0; i < l; i++)
        if (s[i] == ' ')
            s[i] = '_';
        return s;
            
}

int main(void)
{
    string s;
    
    do
    {
        printf("Type string: ");
        s = GetString();
    }
    while ( strlen(s) < 1 );
    
    s = change_space(s);
    
    printf("After change: %s\n", s);
}