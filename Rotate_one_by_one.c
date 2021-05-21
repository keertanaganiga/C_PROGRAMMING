#include <stdio.h>
void rotate(int arr[],int n);
void print(int arr[],int n);

void leftRotate(int arr[],int d,int n)
{
    int i;
    for(i=0;i<d;i++)
        rotate(arr,n);
    
}

void rotate(int arr[],int n)
{
    int i,temp=arr[0];
    for(i=0;i<n-1;i++)
        arr[i]=arr[i+1];
    arr[n-1]=temp;
}

void print(int arr[],int n)
{
    int i;
    for(i=0;i<n;i++)
    printf(" %d",arr[i]);
}
int main()
{
    int arr[]={1,2,3,4,5,6,7};
    int n=7;
    int d=2;
    leftRotate(arr,d,n);
    print(arr,n);
    return 0;
}
