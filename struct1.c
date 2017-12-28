#include <stdio.h>

int main()
{
    struct fio
    {
        char name[10000];
        int age;
    };
    
    struct fio s1 = { .name = "Adam", .age = 29 };
    
    struct fio s2;
    
    s2 = s1;
    
    printf( "Piinter s1 : %p\n", &s1);
    
    printf( "Piinter s2 : %p\n", &s2);
    
    int ch;
    
    printf("Type ch:");
    scanf("%d", &ch);
    
    printf("You typed ch: %d", ch);
}