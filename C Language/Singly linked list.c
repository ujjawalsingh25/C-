#include<stdio.h>
#include<stdlib.h>
struct node
{
     int data;
     struct node *next;
};
struct node *head;

void begin_insert ();
void last_insert ();
void random_insert();
void begin_delete();
void last_delete();
void random_delete();
void length();
void display();


void menu ( )
{
  char ans;
  int choice;
  printf("\n\t SINGLY LINKED LIST"); 
  printf("\n\t--------------------------------"); 
  printf("\n\t 1.Insert at beginning\n\t 2.Insert at last\n\t 3.Insert at any random location\n\t 4.Delete from Beginning\n\t 5.Delete from last\n\t 6.Delete node after specified location\n\t 7.Display\n\t 8.Length\n\t 9.EXIT"); 
  do
  {
    printf("\n Enter your choice (1 to 9) : ");
    fflush(stdin);
    scanf("%d",&choice); 
    switch(choice) 
    { 
        case 1: 
        { 
            begin_insert();
            break; 
        } 
        case 2: 
        { 
            last_insert(); 
            break; 
        } 
        case 3: 
        { 
            random_insert(); 
            break; 
        } 
        case 4: 
        { 
            begin_delete(); 
            break; 
        }
        case 5: 
        { 
            last_delete(); 
            break; 
        } 
        case 6: 
        { 
            random_delete();
            break; 
        } 
        case 7: 
        { 
            display();
            break; 
        } 
        case 8: 
        { 
            length(); 
            break; 
        } 
        case 9: 
        { 
            printf("\n\t EXIT POINT "); 
            break; 
        } 
        default: 
        { 
            printf("\n\tEnter your choice(1/2/3/4/5/6/7/8/9)");
        } 
    } 
   printf("\n Do you want to continue (Y/N)? ");
   fflush(stdin);
   ans=getchar( );
 }while(ans=='Y' || ans=='y');
}


void begin_insert()
{
    struct node *ptr;
    int item;
    ptr = (struct node *) malloc(sizeof(struct node *));
    if(ptr == NULL)
    {
        printf("\nOVERFLOW!");
    }
    else
    {
        printf("\nEnter value:");
        scanf("%d",&item);
        ptr->data = item;
        ptr->next = head;
        head = ptr;
        printf("\nNode inserted.");
    }

}

void last_insert()
{
    struct node *ptr,*temp;
    int item;
    ptr = (struct node*)malloc(sizeof(struct node));
    if(ptr == NULL)
    {
        printf("\nOVERFLOW!");
    }
    else
    {
        printf("\nEnter value: ");
        scanf("%d",&item);
        ptr->data = item;
        if(head == NULL)
        {
            ptr -> next = NULL;
            head = ptr;
            printf("\nNode inserted.");
        }
        else
        {
            temp = head;
            while (temp -> next != NULL)
            {
                temp = temp -> next;
            }
            temp->next = ptr;
            ptr->next = NULL;
            printf("\nNode inserted.");   }
        }
}

void random_insert()
{
    int i,loc,item;
    struct node *ptr, *temp;
    ptr = (struct node *) malloc (sizeof(struct node));
    if(ptr == NULL)
    {
        printf("\nOVERFLOW!");
    }
    else
    {
printf("\nEnter the element: ");
scanf("%d",&item);
ptr->data = item;
        printf("\nEnter the location of the node\nafter which you want to insert: ");
        scanf("\n%d",&loc);
        temp=head;
        for(i=0;i<loc;i++)
        {
            temp = temp->next;
            if(temp == NULL)
            {
                printf("\nCan't insert!\n");
                return;
            }

        }
        ptr ->next = temp ->next;
        temp ->next = ptr;
        printf("\nNode inserted.");
}
}

void begin_delete()
{
    struct node *ptr;
    if(head == NULL)
    {
        printf("\nList is empty.\n");
    }
    else
    {
        ptr = head;
        head = ptr->next;
        free(ptr);
printf("\nNode deleted from begining.\n");
}
}

void last_delete()
{
    struct node *ptr,*ptr1;
    if(head == NULL)
    {
        printf("\nList is empty.");
    }
    else if(head -> next == NULL)
    {
        head = NULL;
        free(head);
        printf("\nOnly node of the list deleted.\n");
    }

else
{
     ptr = head;
     while(ptr->next != NULL)
        {
            ptr1 = ptr;
        ptr = ptr ->next;
        }
        ptr1->next = NULL;
        free(ptr);
        printf("\nNode deleted from last.\n");
    }
}

void random_delete()
{
    struct node *ptr,*ptr1;
int loc,i;
printf("\nEnter the location of the node\nafter which you want to delete: ");
scanf("%d",&loc);
ptr=head;
for(i=0;i<loc;i++)
    {
        ptr1 = ptr;
        ptr = ptr->next;

        if(ptr == NULL)
        {
            printf("\nCan't delete.");
            return;
        }
    }
    ptr1 ->next = ptr ->next;
free(ptr);
printf("\nDeleted node: %d ",loc+1);
}

void length()
{
  struct node* temp = head;
  int count=0;
  while(temp != NULL)
    {
        temp = temp->next;
        count++;
    }
  printf("\nTotal number of nodes is %d.",count);

}

void display()
{
    struct node *ptr;
    ptr = head;
    if(ptr == NULL)
    {
        printf("Nothing to print!");
    }
    else
    {
        printf("\nPrinting values........\n");
        while (ptr!=NULL)
        {
            printf("\n%d",ptr->data);
            ptr = ptr -> next;
        }
    }
}


void main()
{
  menu();
}