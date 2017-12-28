#include <stdio.h>
#include <string.h>


int main()
{
    char* s = "C is fun";
    
    printf("%s sizeof %ld\n", s, sizeof( s ));
    printf("%s strlen %ld\n", s, strlen( s ));
    
    char* ch = &s[0];
    
    printf("ch %p\n", ch);
    printf("s %p\n", s );
         
    for ( ;*ch != '\0'; ch++)
        { 
         
         printf("%c", *ch);
         
         }
        
 /*       char str[100];
     printf("Enter a string: ");
     printf( "\rLength is: %d",
              printf("Entered string is: %s\n", gets(str)) - 20
           );
*/
    return 0;
}