#include<stdio.h>
void selection(int[], int);
int main()
{
    int a[50],n,i;
    printf("\n\t *** Program to implement selection sort *** \n");
    printf("Enter the value of n:");
    scanf("%d",&n);
    printf("\n Enter %d elements of list:",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n Array before sorting: ");
    for(i=0;i<n;i++)
    {
       printf("%d\t",a[i]);
    }
    selection(a,n);
    
    return 0;
}
void selection(int a[], int n)
{
    int i,j,temp;
    for(i=0;i<n;i++)
    {
       for(j=0;j<n;j++)
       {
           if(a[i]<a[j])
           {
               temp=a[i];
               a[i]=a[j];
               a[j]=temp;
           }
       }
    }
    printf("\n\n Array after sorting:");
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
}

