#include<stdio.h>
#include<stdlib.h>

struct node
{
        int info;
        struct node *link;
}*rear=NULL;

void insert(int item);
int del();
void display();
int isEmpty();
int peek();


void menu ( )
{
  char ans;
  int choice,item;
 printf("\n\t CIRCULAR QUEUE USING LINKED LIST"); 
  printf("\n\t--------------------------------"); 
  printf("\n\t 1.INSERT\n\t 2.DELETE\n\t 3.PEEK\n\t 4.DISPLAY\n\t 5.EXIT"); 
  do
  {
    printf("\n Enter your choice (1 to 5) : ");
    fflush(stdin);
    scanf("%d",&choice); 
    switch(choice) 
    { 
        case 1: 
        { 
           printf("\nEnter the element for insertion : ");
           scanf("%d",&item);
           insert(item);
            break; 
        } 
        case 2: 
        {  printf("\nDeleted element is %d\n",del()); 
        break; 
        } 
        case 3: 
        { printf("\nItem at the front of queue is %d\n",peek());
         break; 
        } 
        case 4: 
        { display(); 
         break; 
        } 
        case 5: 
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


void insert(int item)
{
        struct node *tmp;
        tmp=(struct node *)malloc(sizeof(struct node));
        tmp->info=item;
        if(tmp==NULL)
        {
                printf("\nMemory not available\n");
                return;
        }

        if( isEmpty() ) 
        {
                rear=tmp;
                tmp->link=rear;
        }
        else
        {
                tmp->link=rear->link;
                rear->link=tmp;
                rear=tmp;
        }
}
del()
{
        int item;
        struct node *tmp;
        if( isEmpty() )
        {
                printf("\nQueue underflow\n");
                exit(1);
        }
        if(rear->link==rear)  
        {
                tmp=rear;
                rear=NULL;
        }
        else
        {
                tmp=rear->link;
                rear->link=rear->link->link;
        }
        item=tmp->info;
        free(tmp);
        return item;
}
int peek()
{
        if( isEmpty() )
        {
                printf("\nQueue underflow\n");
                exit(1);
        }
        return rear->link->info;
}
int isEmpty()
{
        if( rear == NULL )
                return 1;
        else
                return 0;
}

void display()
{
        struct node *p;
        if(isEmpty())
        {
                printf("\nQueue is empty\n");
                return;
        }
        printf("\nQueue is :\n");
        p=rear->link;
        do
        {
                printf("%d ",p->info);
                p=p->link;
        }while(p!=rear->link);
        printf("\n");
}


void main()
{
  menu();
}