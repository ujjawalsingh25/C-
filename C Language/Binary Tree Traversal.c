#include <stdio.h>
#include <stdlib.h>
struct tnode
{
 int data;
 struct tnode *left, *right;
};
struct tnode *root = NULL;
struct tnode * createNode(int data) 
{
 struct tnode *newNode;
 newNode = (struct tnode *) malloc(sizeof(struct tnode));
 newNode->data = data;
 newNode->left = NULL;
 newNode->right = NULL;
 return (newNode);
}
void insertion(struct tnode **node, int data) 
{
 if (!*node) 
 {
 *node = createNode(data);
 } 
 else if (data < (*node)->data) 
 {
 insertion(&(*node)->left, data);
 }
 else if (data > (*node)->data) 
 {
 insertion(&(*node)->right, data);
 }
 }
void postOrder(struct tnode *node)
{
 if (node)
 {
 postOrder(node->left);
 postOrder(node->right);
 printf("\t%d ", node->data);
 }
 return;
 }
void preOrder(struct tnode *node) 
{
 if (node)
 {
 printf("\t%d ", node->data);
 preOrder(node->left);
 preOrder(node->right);
 }
 return;
}
void inOrder(struct tnode *node) 
{
 if (node)
 {
 inOrder(node->left);
 printf("\t%d ", node->data);
 inOrder(node->right);
 }
 return;
}


void menu ( )
{
  char ans;
  int choice,data;
  int i,n;
 printf("\n\t   BINARY TREE TRAVERSAL"); 
  printf("\n\t---------------------------\n"); 
  printf("Enter the number of elements: ");
    scanf("%d",&n);
    int arr[n+1];
    for(i=1;i<=n;i++)
    {
        printf("Enter element %d: \t", i);
        scanf("%d",&data);
        insertion(&root, data);
    }

 insertion(&root, data);
  printf("\n TRAVERSALS:-\n\t 1.INORDER\n\t 2.PREORDER\n\t 3.POSTORDER\n\t 4.EXIT"); 
  do
  {
    printf("\n Enter your choice (1 to 4) : ");
    fflush(stdin);
    scanf("%d",&choice); 
    switch(choice) 
    { 
        case 1: 
        { 
           inOrder(root);
           break;
        } 
        case 2: 
        {  preOrder(root); 
        break; 
        } 
        case 3: 
        { postOrder(root);
        break;
        } 
        case 4: 
        { 
            printf("\n\t EXIT POINT "); 
            break; 
        } 
        default: 
        { 
            printf("\n\tEnter your choice(1/2/3/4)");
        } 
    } 
   if(choice<=3)
    {   printf("\n Do you want to continue (Y/N)? ");
   fflush(stdin);
    }ans=getchar( );
 }while(ans=='Y' || ans=='y');
}  

void main()
{
  menu();
}