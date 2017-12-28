#include <stdio.h>
#include <cs50.h>

int main()
{
    printf("Give me a number between 1 .. 10: ");
    int i = GetInt();
    switch (i)
    {
    
        case 1: printf("You picked small number!\n");
        break;
        default: printf("You picked invalid number!\n");
    }
}