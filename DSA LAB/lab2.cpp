#include<stdio.h>

unsigned long long factorial(int n) {
    if (n>=1){
    	return n*factorial(n-1);	
	} 
    else{
    	return 1;
	}
        
}
int main() {
    int n;
    printf("\t *** PROGRAM  TO FIND THE FACTORIAL OF POSITIVE INTEGER N USING RECURSION ***");
    printf("\n\t Enter a positive integer: ");
    scanf("%d",&n);
    printf("\n\t Factorial of %d = %llu", n, factorial(n));
    
    return 0;
}

