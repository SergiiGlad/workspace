#include <stdio.h>
#include <cs50.h>

float PrintFloat( float f);

int counter[] = {1,2,3,4,5};

int main(void)
{
    float f;
    
    
    for( int i = 0; i <= 5; i++)
    {
        f = (float)1/10*counter[i];
        printf("f / 10*%d : %.28f\n", i, f);
    };
    
    printf("Input string:");
    string s;
    s = GetString();
    
    int i = 0;
    while ( s[i] != '\0')
        i++;
    
    printf("Length %s is %d\n",s ,i);
}

float PrintFloat ( float f)  
    {
        printf("f / 10 : %.28f\n", f);
        return f;
    };
    
