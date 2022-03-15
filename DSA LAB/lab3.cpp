#include<stdio.h>

int Fibonacci(int N){
	
    if(N==1 || N==2){
    	return 1;
	}
    else{
     	return Fibonacci(N-1)+Fibonacci(N-2);	
	}
       
}
int main()
{
    int i,N;
    printf("\n\t *** Program to print Fibonacci Sequence using recursion *** \n");
    printf("Enter the number of terms: ");
    scanf("%d", &N);
    printf("\n Fibonacci sequence is \n");
    for(i=1; i<=N; i++){
    	printf("%d \t",Fibonacci(i));	
	}

    return 0;
}

