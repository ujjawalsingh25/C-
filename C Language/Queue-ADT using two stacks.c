#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct queue
{
    struct node *stack1;
    struct node *stack2;
};

void enqueue(struct queue *q, int x);
void dequeue(struct queue *q);
//void peek(void);
void display(struct node *top1,struct node *top2);
void push(struct node** top, int data);
int pop(struct node** top);

void menu ( )
{
  char ans;
  struct queue *q = (struct queue*)malloc(sizeof(struct queue));
  int f = 0, a;
  int choice,n;
  char ch = 'y';
  q->stack1 = NULL;
  q->stack2 = NULL;
  printf("\n\t QUEUE ADT OPERATIONS USING TWO STACKS"); 
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
            printf(" Enter a value to enqueue: "); 
            scanf("%d",&a); 
            enqueue(q, a);
            break; 
        } 
        case 2: 
        { 
            dequeue(q); 
            break; 
        } 
        /*case 3: 
        { 
            peek(); 
            break; 
        }*/ 
        case 4: 
        { 
             display(q->stack1, q->stack2);
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


void enqueue(struct queue *q, int x)
{ 
    push(&q->stack1, x); 
}

void dequeue(struct queue *q)
{
    int x;
    if (q->stack1 == NULL && q->stack2 == NULL) 
    { 
        printf("\n\tQueue is Underflow"); 
    }
    else if (q->stack2 == NULL) 
    {
        while (q->stack1 != NULL) 
        {
            x = pop(&q->stack1);
            push(&q->stack2, x);
        }
    }
    x = pop(&q->stack2);
    printf("%d\n", x);
}
        
/*void peek() 
{ 
    if(front == -1 || front > rear)
    { 
        printf("\n\t Queue is Underflow"); 
    }
    else 
    { 
        printf("\n\t The peeked out elements is %d",Queue[front]);  
    } 
}*/ 
        
void display(struct node *top1,struct node *top2)
{
    while (top1 != NULL) {
        printf("%d\n", top1->data);
        top1 = top1->next;
    }
    while (top2 != NULL) {
        printf("%d\n", top2->data);
        top2 = top2->next;
    }
}
void push(struct node** top, int data)
{
    struct node* newnode = (struct node*) malloc(sizeof(struct node));
        if (newnode == NULL) 
        {
            printf("Stack overflow \n");
            return;
        }
    newnode->data = data;
    newnode->next = (*top);
    (*top) = newnode;
}
int pop(struct node** top)
{
    int buff;
    struct node *t;
    if (*top == NULL) 
    {
        printf("Stack underflow \n");
    }
    else 
    {
        t = *top;
        buff = t->data;
        *top = t->next;
        free(t);
        return buff;
    }
}

void main()
{
  menu();
}