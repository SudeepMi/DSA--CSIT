/*
Author: Sudeep Mishra
*/

#include<iostream>


using namespace std;
int main()
{
	int a[10],n,i,key;
	cout<<"Enter the value of N: ";
	cin>>n;
	cout<<"Enter array el:"<<endl;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<"Enter the value of key: ";
	cin>>key;
	
	for(i=0;i<n;i++){
		if(a[i]==key){
			cout<<"Item found at index "<<i<<" and position "<<i+1<<endl;
			break;
		}
	}
	if(i==n){
		cout<<"Item not found";
	}

	
	 return 0;
}
