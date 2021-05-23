#include <stdio.h>
void swap(int arr[],int s,int e,int d);
void leftRotate(int arr[],int d,int n)
{
    if(d==0||d==n)
        return;
    if(n-d==d)
    {
        swap(arr,0,n-d,d);
        return;
    }
    if(d<n-d)//A is shorter
    {
        swap(arr,0,n-d,d);
        leftRotate(arr,d,n-d);
    }
    else //B is shorter
    {
        swap(arr,0,d,n-d);
        leftRotate(arr+n-d,2*d-n,d);
    }
}

void swap(int arr[],int s,int e,int d)
{
    int i,temp;
    for(i=0;i<d;i++)
    {
        temp=arr[s+i];
        arr[s+i]=arr[e+i];
        arr[e+i]=temp;
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
    leftRotate(arr,d,n);
    print(arr,n);
    return 0;
}
