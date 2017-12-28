#include <stdio.h>
#include <cs50.h>

int main(void)
{
    float f = 0.0;
    float c = 0.0;
    float i = 0.0;
    
    printf("Temperature in F: ");
    f = GetFloat();
    
    while( c <= 36.6 )
        {
            c = 5.0 / 9.0 * (i - 32.0);
            i = i + 0.01;
        };
      
    printf("Temperature in C 36.6 equal in F:%.01f\n", 36.6 * 9.0 / 5.0 + 32.0);
    printf("Temperature in F 97.9.6 equal in C:%.01f\n", 5.0 / 9.0 * ( 97.9- 32.0));
    printf("Tempreture in C %.1f\n", c);
    printf("Tempreture in F %.1f\n", i);
}