#include <stdio.h>

typedef struct family_tree
{
    char* name;
    struct family_tree* left;
    struct family_tree* right;
} family_tree;

void print_tree( family_tree* f);

int main()
{
    
    family_tree p2 = { .name  = "p2" };
      
        
    family_tree p3 = {.name = "p3" };
        
    family_tree p1 = {.name = "p1", .left = &p2, .right = &p3 };
   
    print_tree( &p1 );
}


void print_tree( family_tree* f)
{
    if ( f == NULL )
        return;
    printf("%s\n", f->name);
    print_tree( f->left);
    print_tree( f->right);
}