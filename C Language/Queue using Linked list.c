#include<stdio.h>
#include<stdlib.h>
#define MAX 100
struct node
{
    int info;
    struct node *ptr;
}*front,*rear,*temp,*front1;


int Queue[MAX];
int frontelement();
void enq(int data);
void deq();
void empty();
void display();
void create();
void queuesize();
int count = 0;

void menu ( )
{
  char ans;
   int no, choice, e;
  printf("\n\t QUEUE USING LINKED LIST"); 
  printf("\n\t--------------------------------"); 
  printf("\n\t 1.ENQUEUE\n\t 2.DEQUEUE\n\t 3.PEEK\n\t 4.DISPLAY\n\t 5.EMPTY\n\t 6.QUEUE SIZE\n\t 7.EXIT"); 
  do
  {
    printf("\n Enter your choice (1 to 7) : ");
    fflush(stdin);
    scanf("%d",&choice); 
    switch(choice) 
    { 
        case 1: 
        { 
            printf("Enter data : ");
            scanf("%d", &no);
            enq(no);
            break; 
        } 
        case 2: 
        {  deq(); 
        break; 
        } 
        case 3: 
        {  e = frontelement();
            if (e != 0)
                printf("Front element : %d", e);
            else
                printf("\n No front element in Queue as queue is empty"); 
         break; 
        } 
        case 4: 
        { display();
         break; 
        }
        case 5: 
        { empty();
         break; 
        } 
        case 6:
        {    queuesize();
            break; 
        }
        case 7: 
        { 
            printf("\n\t EXIT POINT "); 
            break; 
        } 
        default: 
        { 
            printf("\n\tEnter your choice(1/2/3/4/5)");
        } 
    } 
   printf("\n Do you want to continue (Y/N)? ");
   fflush(stdin);
   ans=getchar( );
 }while(ans=='Y' || ans=='y');
}


void create()
{
    front = rear = NULL;
}
 
/* Returns queue size */
void queuesize()
{
    printf("\n Queue size : %d", count);
}
 
/* Enqueing the queue */
void enq(int data)
{
    if (rear == NULL)
    {
        rear = (struct node *)malloc(1*sizeof(struct node));
        rear->ptr = NULL;
        rear->info = data;
        front = rear;
    }
    else
    {
        temp=(struct node *)malloc(1*sizeof(struct node));
        rear->ptr = temp;
        temp->info = data;
        temp->ptr = NULL;
 
        rear = temp;
    }
    count++;
}
 
/* Displaying the queue elements */
void display()
{
    front1 = front;
 
    if ((front1 == NULL) && (rear == NULL))
    {
        printf("Queue is empty");
        return;
    }
    while (front1 != rear)
    {
        printf("%d ", front1->info);
        front1 = front1->ptr;
    }
    if (front1 == rear)
        printf("%d", front1->info);
}
 
/* Dequeing the queue */
void deq()
{
    front1 = front;
 
    if (front1 == NULL)
    {
        printf("\n Error: Trying to display elements from empty queue");
        return;
    }
    else
        if (front1->ptr != NULL)
        {
            front1 = front1->ptr;
            printf("\n Dequed value : %d", front->info);
            free(front);
            front = front1;
        }
        else
        {
            printf("\n Dequed value : %d", front->info);
            free(front);
            front = NULL;
            rear = NULL;
        }
        count--;
}
 
/* Returns the front element of queue */
int frontelement()
{
    if ((front != NULL) && (rear != NULL))
        return(front->info);
    else
        return 0;
}
 
/* Display if queue is empty or not */
void empty()
{
     if ((front == NULL) && (rear == NULL))
        printf("\n Queue empty");
    else
       printf("Queue not empty");
}


void main()
{
  menu();
}