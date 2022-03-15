#include <stdio.h>
#include <stdlib.h>
struct node  /* A binary tree node has data, pointer to left child and a pointer to right child */
{
     int data;
     struct node* left;
     struct node* right;
};

void insert(struct node**head, int num)  /* Helper function that allocates a new node with the given data and NULL left and right pointers. */
{
     struct node* newnode = (struct node*)malloc(sizeof(struct node));
     newnode->data = num;
     newnode->left = NULL;
     newnode->right = NULL;
     if(*head==NULL){
     	*head = newnode;
	 }else if(num<(*head)->data){
	 	insert(&((*head)->left),num);
	 }else  if(num>(*head)->data){
	 	insert(&((*head)->right),num);
	 }else{
	 	printf("DUPLICATE");
	 }
}
void printPostorder(struct node* node)  /* Given a binary tree, print its nodes according to the "bottom-up" postorder traversal. */
{
     if (node == NULL)
        return;
     
     printPostorder(node->left);	// first recur on left subtree
     printPostorder(node->right);	// then recur on right subtree   
     printf("%d ", node->data);	// now deal with the node
}
void printInorder(struct node* node)	/* Given a binary tree, print its nodes in Inorder*/
{
     if (node == NULL)
          return;
     printInorder(node->left);		     /* first recur on left child */
     printf("%d ", node->data);	    /* then print the data of node */   
     printInorder(node->right);	    /* now recur on right child */
}
void printPreorder(struct node* node)	/* Given a binary tree, print its nodes in preorder*/
{
     if (node == NULL)
          return;
     printf("%d ", node->data);	     /* first print data of node */
     printPreorder(node->left); 	     /* then recur on left sutree */
      printPreorder(node->right);	   /* now recur on right subtree */
}
		
int main()		/* Driver program to test above functions*/
{
     struct node *root;
     root=NULL;
     int opt,num;
     printf("Program to implement BST with traversal");
     printf("\n 1. INSERT \n 2. INORDER TRAVERSAL \n 3. PREORDER TRAVERSAL \n 4. POSTORDER TRAVERSAL \n 5. EXIT \n");
     do{
     	printf(" \n Enter your choice : ");
     	scanf("%d",&opt);
     	switch(opt){
     		case 1:
     			printf("Enter the value to insert into BST : ");
     			scanf("%d", &num);
     			insert(&root,num);
     			break;
     		case 2:
     			printf("\nInorder traversal of binary tree is \n");
     			printInorder(root);
     			break;
     		case 3:
     			printf("\nPreorder traversal of binary tree is \n");
     			printPreorder(root);
     			break;
     		case 4:
     			printf("\nPostorder traversal of binary tree is \n");
     			printPostorder(root);
     			break;
     		case 5:
     			exit(0);
     			break;
     		default:
     			exit(1);
		 }
	 }while(opt);
    
     getchar();
     return 0;
}

