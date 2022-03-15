#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define SIZE 5

struct queue
{
int item[SIZE];
int rear;
int front;
};

void enqueue(struct queue *q);
void dequeue(struct queue *q);
void display(struct queue *q);
bool isEmpty(struct queue *q);
bool isFull(struct queue *q);


int main(){

	int ch;
	struct queue q;
	q.rear=-1;
	q.front=0;
	printf("\n ---- Menu for program: ----\n");

	do{ 
		printf("\n1:Enqueue\n2:Dequeue\n3:Display\n4:Exit\n");
		printf("\n Enter youer choice: ");
		scanf("%d",&ch);
		switch(ch){
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
				printf("Invalid choice \n");
			}
	}while(ch!=4);
	getch();
	return 0;
}

/**********enqueue function*************/
void enqueue(queue *q){ 
	int d;
	printf("Enter data to be enqueued:");
	scanf("%d",&d);
	if(!isFull(q)){
	q->rear++;
	q->item[q->rear]=d;
	printf("Item Added into queue");
	}
}

/***********dequeue function*****************/
void dequeue(queue *q){
	int d;
	if(!isEmpty(q)){
		d=q->item[q->front];
		q->front++;
		printf("dequeueed item is: %d",d);
	}
}
/**************display function***********/
void display(queue *q){
	int i;
	if(!isEmpty(q)){
		for(i=q->front;i<=q->rear;i++){
		printf("%d\t",q->item[i]);
		}
		printf("\n");
	}
}
/**************isEmpty function***********/
bool isEmpty(struct queue *q){
	if(q->rear<q->front){
	printf("Queue is empty\n");
	return true;
	}
	return false;
}

/**************isFull function***********/
bool isFull(struct queue *q){
	if(q->rear==SIZE-1){
	printf("Queue is full\n");
	return true;
	}
	return false;
}



