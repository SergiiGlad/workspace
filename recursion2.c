#include <stdio.h>
#include <stdbool.h>
#include <string.h>



bool compares( char*);



typedef struct family_tree
{
    char* name;
    struct family_tree* left;
    struct family_tree* right;
} family_tree;

void print_tree( family_tree* f);
bool comp_tree( family_tree* f);

 char* name = "Sergii";

int main()
{
    
   
    
    family_tree p2 = { .name  = "p2" };
    
    family_tree p4 = {.name = "Sergii" };
        
    family_tree p3 = {.name = "p3", .right = &p4 };
        
    family_tree p1 = {.name = "p1", .left = &p2, .right = &p3 };
   
    print_tree( &p1 );
    
    if ( comp_tree ( &p1 ) )
        printf("Sergii been has\n");
    else
        printf("Sergii is epsend\n");
}


bool comp_tree( family_tree* f)
{
    if ( f == NULL )
        return false;
    
    return compares( f->name);
    
}

void print_tree( family_tree* f)
{
    if ( f == NULL )
        return;
    printf("%s\n", f->name);
    print_tree( f->left);
    print_tree( f->right);
}

bool compares( char* name1)
{
    bool b = false;
    
    for( int i = 0; i < strlen( name1 ) - strlen(name); i++)
    {
        b = false;
        
        for( int j = 0 ; j < strlen(name); j++)
            if ( *name1 == *name) 
                b = true;
            else b = false;
        if ( b == true )
            return true;
    }       
    
    return false;
}