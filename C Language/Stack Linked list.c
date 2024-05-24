#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node *ptr;
}*top,*top1,*temp;
 
int topelement();
void push(int data);
void pop();
void empty();
void display();
void destroy();
void stack_count();
void create();
 
int count = 0;

void menu ( )
{
  char ans; 
  int choice, no,e;
  printf("\n\t STACK USING LINKED LIST"); 
  printf("\n\t--------------------------------"); 
  printf("\n\t 1.PUSH\n\t 2.POP\n\t 3.PEEK\n\t4.DISPLAY\n\t 5.EMPTY\n\t 6.STACK COUNT\n\t 7.DISTROY STACK\n\t  8.EXIT"); 
 create();
  do
  {
    printf("\n Enter your choice (1 to 8) : ");
    fflush(stdin);
    scanf("%d",&choice); 
    switch(choice) 
    { 
        case 1: 
        { 
            printf("Enter data : ");
            scanf("%d", &no);
            push(no);
            break; 
        } 
        case 2: 
        { pop(); 
        break; 
        } 
        case 3: 
        { if (top == NULL)
                printf("No elements in stack");
            else
            {
                e = topelement();
                printf("\n Top element : %d", e);
            } 
         break; 
        } 
        case 4: 
        { display(); 
         break; 
        }  empty();
        case 5: 
        { empty();
         break; 
        }
        case 6: 
        {stack_count();
         break; 
        }  empty();
        case 7: 
        {  destroy();
         break; 
        }
        case 8: 
        { 
            printf("\n\t EXIT POINT "); 
            break; 
        } 
        default: 
        { 
            printf("\n\t Please Enter a Valid Choice(1/2/3/4/5)");
        } 
    } 
   printf("\n Do you want to continue (Y/N)? ");
   fflush(stdin);
   ans=getchar( );
 }while(ans=='Y' || ans=='y');
}


/* Create empty stack */
void create()
{
    top = NULL;
}
 
/* Count stack elements */
void stack_count()
{
    printf("\n No. of elements in stack : %d", count);
}
 
/* Push data into stack */
void push(int data)
{
    if (top == NULL)
    {
        top =(struct node *)malloc(1*sizeof(struct node));
        top->ptr = NULL;
        top->info = data;
    }
    else
    {
        temp =(struct node *)malloc(1*sizeof(struct node));
        temp->ptr = top;
        temp->info = data;
        top = temp;
    }
    count++;
}
 
/* Display stack elements */
void display()
{
    top1 = top;
 
    if (top1 == NULL)
    {
        printf("Stack is empty");
        return;
    }
 
    while (top1 != NULL)
    {
        printf("%d ", top1->info);
        top1 = top1->ptr;
    }
 }
 
/* Pop Operation on stack */
void pop()
{
    top1 = top;
 
    if (top1 == NULL)
    {
        printf("\n Error : Trying to pop from empty stack");
        return;
    }
    else
        top1 = top1->ptr;
    printf("\n Popped value : %d", top->info);
    free(top);
    top = top1;
    count--;
}
 
/* Return top element */
int topelement()
{
    return(top->info);
}
 
/* Check if stack is empty or not */
void empty()
{
    if (top == NULL)
        printf("\n Stack is empty");
    else
        printf("\n Stack is not empty with %d elements", count);
}
 
/* Destroy entire stack */
void destroy()
{
    top1 = top;
 
    while (top1 != NULL)
    {
        top1 = top->ptr;
        free(top);
        top = top1;
        top1 = top1->ptr;
    }
    free(top1);
    top = NULL;
 
    printf("\n All stack elements destroyed");
    count = 0;
}

void main()
{
  menu();
}