#include <stdio.h>
void print(int arr[],int n);
void reverseArray(int arr[],int s,int e);
int rotateLeft(int arr[],int d,int n)
{
    if(d==0)
        return;
    d=d%n;
    reverseArray(arr,0,d-1);
    reverseArray(arr,d,n-1);
    reverseArray(arr,0,n-1);
}

void reverseArray(int arr[],int s,int e)
{
    while(s<e)
    {
    int temp=arr[s];
    arr[s]=arr[e];
    arr[e]=temp;
    s++;
    e--;
    }
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
    rotateLeft(arr,d,n);
    print(arr,n);
}
