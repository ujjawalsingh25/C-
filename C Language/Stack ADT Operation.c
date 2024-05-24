#include<stdio.h>
#include<stdlib.h>
int stack[100];
int choice,n,top,x,i; 
void push(void); 
void pop(void); 
void peek(void);
void display(void); 


void menu ( )
{
  char ans;
  top=-1;
  printf("\n Enter the size of STACK: "); 
  scanf("%d",&n); 
  printf("\n\t STACK ADT OPERATIONS USING ARRAY"); 
  printf("\n\t--------------------------------"); 
  printf("\n\t 1.PUSH\n\t 2.POP\n\t 3.PEEK\n\t4.DISPLAY\n\t 5.EXIT"); 
  do
  {
    printf("\n Enter your choice (1 to 5) : ");
    fflush(stdin);
    scanf("%d",&choice); 
    switch(choice) 
    { 
        case 1: 
        { 
            push(); 
            break; 
        } 
        case 2: 
        { pop(); 
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
            printf("\n\t Please Enter a Valid Choice(1/2/3/4/5)");
        } 
    } 
   printf("\n Do you want to continue (Y/N)? ");
   fflush(stdin);
   ans=getchar( );
 }while(ans=='Y' || ans=='y');
}


void push() 
    { 
    if(top>=n-1) 
    { 
    printf("\n\tSTACK is over flow"); 
    }
    else 
    { 
        printf(" Enter a value to be pushed: "); 
        scanf("%d",&x); top++; stack[top]=x; 
    } 
}

void pop() 
{ 
    if(top<=-1) 
    { 
        printf("\n\t Stack is under flow"); 
    }
    else 
    { 
        printf("\n\t The popped elements is %d",stack[top]); 
        top--; 
    } 
} 
        
void peek() 
{ 
    if(top<=-1) 
    { 
        printf("\n\t Stack is under flow"); 
    }
    else 
    { 
        printf("\n\t The peeked out elements is %d",stack[top]);  
    } 
} 
        
void display() 
{ 
    if(top>=0) 
    { 
    printf("\n The elements in STACK \n"); 
    for(i=top; i>=0; i--) printf("\n%d",stack[i]); 
    printf("\n Press Next Choice"); 
    } 
    else 
    { 
        printf("\n The STACK is empty"); 
    }
}


void main()
{
  menu();
}