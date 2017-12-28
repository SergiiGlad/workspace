/**
 * This programm print out initials
 *
*/

#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <ctype.h>

int main(int argc, char* argv[])
{
    string fio;
    
    int len;
  
    
    // input full name;
    // printf("Input string: ");
    do
    {
        fio = GetString();   
    }
    while ( strlen( fio ) == 0 );
    
    // check null size

    // count length string
    if ( fio != NULL ) 
        len = strlen( fio );
    else 
        return 0;
        
    // printf("Length: %d\n", len);
    
   // print the first letter up case
   
    int i = 0, b = 1;
    for ( i = 0; i < len; i++)
    {
        if ( fio[i] != ' ' )  
        {
            if ( b == 1) 
            {
                printf("%c", toupper( fio[i]) );
                b = 0;
            }
        }
        
        else 
            b = 1;    
    }        
    printf("\n");
    
    return 0;
}