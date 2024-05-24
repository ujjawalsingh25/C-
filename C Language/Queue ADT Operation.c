#include<stdio.h>
#include<stdlib.h>
#define MAX 100

int Queue[MAX];
int choice,n,front,rear,x,i; 
void enqueue(void); 
void dequeue(void); 
void peek(void);
void display(void); 


void menu ( )
{
  char ans;
  front = -1;
  rear = -1;
  printf("\n Enter the size of Queue: "); 
  scanf("%d",&n); 
  printf("\n\t QUEUE ADT OPERATIONS USING ARRAY"); 
  printf("\n\t--------------------------------"); 
  printf("\n\t 1.ENQUEUE\n\t 2.DEQUEUE\n\t 3.PEEK\n\t 4.DISPLAY\n\t 5.EXIT"); 
  do
  {
    printf("\n Enter your choice (1 to 5) : ");
    fflush(stdin);
    scanf("%d",&choice); 
    switch(choice) 
    { 
        case 1: 
        { 
            enqueue(); 
            break; 
        } 
        case 2: 
        { dequeue(); 
        break; 
        } 
        case 3: 
        { peek(); 
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


void enqueue() 
{ 
    if(rear == n-1) 
    { 
    printf("\n\tQueue is Overflow"); 
    }
    else 
    { 
        if(front == -1)
        front = 0;
        printf(" Enter a value to enqueue: "); 
        scanf("%d",&x); 
        rear = rear+1; 
        Queue[rear]=x; 
    } 
}

void dequeue() 
{ 
    if(front == -1 || front > rear) 
    { 
        printf("\n\tQueue is Underflow"); 
    }
    else 
    { 
        printf("\n\t The dequeue elements is : %d ",Queue[front]); 
        front = front+1; 
    } 
} 
        
void peek() 
{ 
    if(front == -1 || front > rear)
    { 
        printf("\n\t Queue is Underflow"); 
    }
    else 
    { 
        printf("\n\t The peeked out elements is %d",Queue[front]);  
    } 
} 
        
void display() 
{ 
    if(front == -1) 
    { 
     printf("\n The Queue is empty");
    } 
    else 
    {
        printf("\n The Elements in Queue \n"); 
        for(i=front; i<= rear; i++) 
        {
            printf("\t%d", Queue[i]);  
        } 
    }
}


void main()
{
  menu();
}