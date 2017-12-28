/*

Link list

*/

#include <stdio.h>
#include <cs50.h>


typedef struct node
    {
        int sf;
        struct node* next;
    }node;
    
node* ins_node( node*, node*);

int main( int argc, char * * argv)
{
    int size;
    
    node first = { .sf = 0, .next = NULL };
    
    node* crawler;
    
    node* nova;
    
    printf("How much size array of node: ");
    
    size = GetInt();
    
    crawler = &first;
    
    for( int i = 0; i < size; i++)
    {
        printf("Type positive number %.02d:", i);
        
        
            nova = malloc(sizeof(node));
            
            
            if ( nova == NULL)
            {
                printf("Not enought memory\n");
                return 1;
            }
            else nova->sf  = GetInt();
            
            crawler->next = nova;
            nova->next = NULL;
            
            crawler = nova;
    }
        
        
   
    
    crawler = &first;
    
  while ( crawler != NULL )
    {
        printf("%d\n", crawler->sf);
        crawler = crawler->next;   
    }
    
    printf("Insert number: ");
    
    nova = malloc(sizeof(node));
            
            
            if ( nova == NULL)
            {
                printf("Not enought memory\n");
                return 1;
            }
            else nova->sf  = GetInt();
            
            nova->next = NULL;
    
    crawler = ins_node( nova, &first);
    
    crawler = &first;
    
     while ( crawler != NULL )
    {
        printf("%d\n", crawler->sf);
        crawler = crawler->next;   
    }
    
    free ( nova );
    
    return 0;
}



node* ins_node( node* n1, node* n2)
{
     node* temp;
     
     // init temp
     temp = n2;
     
     while ( n2 !=  NULL)
    {   
        // if new < current
        if ( n1->sf < n2->sf )
            {
                // next is nova
                n1->next = n2;
                temp->next = n1;
                return n2;
                
            }
       // remember pevious node
       temp = n2;
      n2 = n2->next;
    }
    
    temp->next = n1;
    n1->next = NULL;
    return n2;
}