#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define SIZE 5
struct queue
{
int item[SIZE];
int rear;
int front;
};

/**************underflow function***********/
bool isEmpty(struct queue *q){
	if(q->rear==q->front){
	printf("Queue is empty\n");
	return true;
	}
	return false;
}

/**************overflow function***********/
bool isFull(struct queue *q){
	if((q->rear+1)%SIZE==q->front){
	printf("Queue is full\n");
	return true;
	}
	return false;
}


void enqueue(queue *q){
	int d;
	if(!isFull(q)){
	q->rear=(q->rear+1)%SIZE;
	printf ("\nEnter data to be inserted : ");
	scanf("%d",&d);
	q->item[q->rear]=d;
	}
}

void dequeue(queue *q){
	if(!isEmpty(q)){
	q->front=(q->front+1)%SIZE;
	printf("\nDeleted item is:");
	printf("%d\n",q->item[q->front]);
	}
}

void display(queue *q){
	int i;
	if(!isEmpty(q)){
	printf("\nItems of queue are:\n");
	for(i=(q->front+1)%SIZE;i<=q->rear;i=(i+1)%SIZE)
	{
		printf("%d\t",q->item[i]);
	}
	}
}


int main(){
	
	int ch;
	struct queue q;
	q.rear=SIZE-1;
	q.front=SIZE-1;
	printf("\n\t\t ---- Program for implementing circular queue ---- \n\n");
	printf("Menu for program:\n");
	printf("1:insert\n2:delete\n3:display\n4:exit\n");
	do
	{
	printf("\nEnter youer choice: ");
	scanf("%d",&ch);
	switch(ch)
	{
	case 1:
	enqueue(&q);
	break;
	case 2:
	dequeue(&q);
	break;
	case 3:
	display(&q);
	break;
	case 4:
	exit(1);
	break;
	default:
	printf("Your choice is wrong\n");
	break;
	
	}
	}while(ch!=4);
	getch();
}

