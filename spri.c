#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <math.h>
#define M_PI 3.141593

int main()
{
    char s[3]= "123";
    int i = 4;
    
    sprintf( s, "%i", i );
    puts(s);
    
    printf("%s\n", s);
    
    char str[80];

   sprintf(str, "Value of Pi = %.10f", M_PI);
   puts(str);
   
   return(0);

}