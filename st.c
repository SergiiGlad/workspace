#include <stdio.h>

// struct _book;

typedef struct _book {
        char* name;
        int pages;
    }book;



void outs( book b);

void swap_name( book *, book*);

int main()
{
   
    
    book b0 = { "Book0", 600 };
    book b1 = { "Book1", 500 };
    
    outs( b1 );
    
    book b2;
    
    b2 = b1;
    
    outs( b2 ); 
    
    swap_name( &b0, &b1);
    
    printf("b1 After swap_name\n");
    
    outs( b1 );
    
    char* s = "C is fun";
    
    printf("%s sizeof %ld\n", s, sizeof( s ));
    
    char* ch = s;
      while ( ch++ != '\0')
         printf("%c", *ch);
    return 0;
}

void outs( book b)
{
    printf("%s %d\n", b.name, b.pages );
}

void swap_name( book* b3, book* b4)
{
    book temp;
    temp.name = b3->name;
    b3->name = b4->name;
    b4->name = temp.name;
}