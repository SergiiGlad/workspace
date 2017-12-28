# include <stdio.h>
# include <cs50.h>
# include <string.h>

int main(void)
{
    int argc;
    char argv[9][5] = {"LOVE","LOVE","LOVE","LOVE","LOVE","LOVE","LOVE","LOVE","LOVE"}; 
    do 
        {
        printf("inpute pls argument:");
        argc = GetInt(); 
        }while( argc < 1 || argc > 9 );
        
   
    for(int i = 0; i < argc; i++)
    {
        for ( int j = 0, n = strlen(argv[i]); j < n; j++)
            {
                printf("%c", argv[i][j]);
            }    
    printf("\n");
    }
}