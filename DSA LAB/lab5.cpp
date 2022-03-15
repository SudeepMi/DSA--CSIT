#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#define CAPACITY 100 // Queue capacity
int queue[CAPACITY];  // Global queue declaration
unsigned int size  = 0;
unsigned int rear  = CAPACITY - 1;   // Initally assumed that rear is at end
unsigned int front = 0;

/* Function declaration for various operations on queue */
int isFull ( ){	
	return (size == CAPACITY);
}
int isEmpty(){
	return (size == 0); 
}

int getFront(){  
	return (isEmpty()) ? INT_MIN : queue[front]; 
}

int getRear(){  
	return (isEmpty()) ? INT_MIN : queue[rear]; 
}

int enqueue(int data){
    if (isFull()){
		return 0;   
	}
    rear = (rear + 1) % CAPACITY;       
    size++;      
    queue[rear] = data;  
    return 1;   
}

int dequeue(){
	int data = INT_MIN;
    if (isEmpty()){  
		return INT_MIN;
	}
    data = queue[front];
    front = (front + 1) % CAPACITY;      
    size--;    
    return data; 
}
     



/* Driver function */
int main(){
	   int ch, data;
 		/* Run indefinitely until user manually terminates */
        while (1){    
        printf("\t_______________________________________\n\n");
        printf("\t QUEUE ARRAY IMPLEMENTATION PROGRAM\n");
        printf("\t_______________________________________\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Size\n");
        printf("4. Get Rear\n");
        printf("5. Get Front\n");
        printf("0. Exit\n");
        printf("--------------------------------------\n");
        printf("Select an option: ");
        scanf("%d", &ch);
        switch (ch){
		   case 1:
                printf("\nEnter data to enqueue: ");
                scanf("%d", &data);
                                if (enqueue(data))   // Enqueue function returns 1 on success otherwise 0
                    printf("Element added to queue.");
                else
                    printf("Queue is full.");
                break;
            case 2:
                data = dequeue();
                    if (data == INT_MIN)  // on success dequeue returns element removed otherwise returns INT_MIN
                    printf("Queue is empty.");
                else
                    printf("Data => %d", data);
                break;
            case 3:
                if (isEmpty())                // isEmpty() function returns 1 if queue is emtpy  otherwise returns 0
                    printf("Queue is empty.");
                else
                    printf("Queue size => %d", size);
                break;
            case 4:
                if (isEmpty())
                    printf("Queue is empty.");
                else
                    printf("Rear => %d", getRear());
                break;
            case 5:
                if (isEmpty())
                    printf("Queue is empty.");
                else
                    printf("Front => %d", getFront());
                break;
            case 0:
                printf("Exiting from app.\n");
                exit(0);
            default:
                printf("Invalid choice, please input number between (0-5).");
                break;
        }   
		printf("\n\n");
		  }
		  
		return 0;
	}




