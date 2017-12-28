#include <stdio.h>
#include <string.h>
#include <strings.h>
#include <stdlib.h>
#include <ctype.h>
#define HASHTABLE_SIZE 65536 


int hashing_function(char* word);
unsigned int hashing_function1(char* word);

int main( void )
{
    FILE* fp = NULL;
    
    fp = fopen("dictionaries/small", "r");
    
    if ( fp == NULL )
        {
            printf("Could not open file:\n");    
            return 2;
        }
    
    char word[128];
    
    int w = 0;
        
    while( fscanf( fp, "%s", word) != EOF )
        {
            if ( hashing_function1( word )  > 65536 )
                printf(" hashing > 65536\n");
            else 
            if ( hashing_function( word )  < 0 )
                printf(" hashing < 0\n");
            
          
            
            w++;    
        }    
    
    printf( "Read %i words\n", w);
    
    printf(" %s is length %lu\n", word, strlen(word) );
    
    int l = strlen( word ) ; 
    
    char *copy = malloc( l + 1 ); 
     
     copy[ l ] = '\0'; 
     
     // copy the characters and make them lower case 
     //for (int i = 0; i < l; i++) 
     //    copy[i] = tolower(word[i]); 
     
     for ( ; *copy; ++copy) *copy = tolower(*copy);  
     // add the end of string character 
     
 
    printf(" copy: %s is length %lu\n", copy, strlen( copy ) );
    
    
   
    
    if ( strcasecmp( "Ffooa" , "fFooa") == 0 )
        printf("result strcasecmp Foo foo 0 \n");
    
    fclose ( fp );
    
}


int hashing_function(char* word) 
{ 
 unsigned int hash = 0; 
 for (int i = 0, n = strlen(word); i < n; i++) 
     hash = (hash << 2) ^ word[i]; 
     return hash % HASHTABLE_SIZE; 
} 


unsigned int hashing_function1(char* word)
{
    unsigned int hashedValue = 0;
   
    unsigned long multiplier = 1;

    
    for (int i = 0, n = strlen( word ); i < n; i++) 
    {
        hashedValue += word[i] * multiplier;
        multiplier *= 37;
        
    }
    
      printf("%i\n", hashedValue % HASHTABLE_SIZE );
  
    return hashedValue % HASHTABLE_SIZE ;
}