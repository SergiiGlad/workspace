#include <stdio.h>
#include <stdbool.h>

#define CAPACITY 10


typedef struct 
{
    int head;
    int length;
    int elements[CAPACITY];
}queue;


/*
 * dequeue() - remove an element from the head of the queue
 *
 * @param queue *q  - the queue manipulate
 * @param int* element - a pointer to a variable to hold the element
 * @returns bool - true if removal was successful
 */
 
 bool dequeue ( queue* q, int* element );

/*
 * enqueue() - add an element to the head of the queue
 * @param queue* q - the queue to manipulate
 * @param int element - the element to be added
 * @return bool - true if addition was saccessful
 */



 bool enqueue ( queue* q, int element );

/*
 * isempty() - checks if the queue is empty
 * 
 * @param queue* q - the queue to manipulate
 * @return bool - true if the queue is empty
 */
 
 bool isempty( queue* q );
 
/*
 * length() - counts the number of elements in the queue
 * 
 *@param queue* q - the queue to manipulate
 *@return int - the number of elements in the queue
 */
 
 int length( queue* q);

/*
 * outqueue() - print all the and the head 
 */
 
 int outqueue( queue* q);
 
 
/*
 * main  - test the queue
 */
 
int main()
{
  
  queue q = 
  {
    .head = 0,
    .length = 0
  };

    
  
  for ( int i = 0; i < CAPACITY; i++)
    enqueue( &q, i);
  
  
  int x;
  
  do
  {
  
  x = outqueue( &q );
  
  printf("How many number dequeue: ");
  
  scanf("%d", &x);
  
  int n;
  
  for( int i = 0; i < x; i++)
    dequeue( &q, &n );
  
  } while ( !isempty( &q ) );
   
    do
  {
  
  x = outqueue( &q );
  
  printf("How many number add to queue: ");
  
  scanf("%d", &x);
  
 
  
  for( int i = 0; i < x; i++)
    enqueue( &q, i );
  
  } while ( length( &q ) <= CAPACITY);
   
   return 0;  
   
   
    
}


bool dequeue ( queue* q, int* element )
{
    if ( q->length > 0 )
    {
        *element = q->elements[q->head];
        q->head = ( q->head + 1 ) % CAPACITY;
        q->length--;
        printf(" dequeue: %d\n", *element );
        return true;
    }
    
    return false;
}


 bool enqueue ( queue* q, int element )
 {
     if ( q->length < CAPACITY )
     {
         q->elements[ (q->head + q->length) % CAPACITY ] = element;
         q->length++;
         printf(" enqueue: %d\n", element );
         return true;
     }
     
     return false;
 }
 
 bool isempty( queue* q )
 {
     if ( q->length == 0) 
        return true;
    else
        return false;
 }
 
 int length( queue* q)
 {
     return q->length;
 }
 
 
 int outqueue( queue* q)
 {
     int x;
     
     if ( !isempty( q) )
     {
        printf("All the queue\n");
        for ( int i = q->head; i < q->length; i++)
            printf("%d ", q->elements[i]);

         x = q->elements[ q->head ];
        
        printf(" \nThe head: %d\n", x );
        
        return x;
     
     }
     
     return 0;
 };