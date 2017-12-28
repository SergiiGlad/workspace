#include <stdio.h>
#include <math.h>
#include <cs50.h>

int main(void)
{
    float f;
    printf("Input float: ");
    f = GetFloat();
    printf("You picked int %d\n", (int)f);
}