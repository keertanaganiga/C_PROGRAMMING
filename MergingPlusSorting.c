#include<stdio.h>
void merge(int a[],int b[],int c[],int n,int m)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        c[i]=a[i];
    }
    for(j=0;j<m;j++)
    {
        c[i]=b[j];
        i++;
    }
}

void print(int c[],int m,int n)
{
    int i;
    int k=m+n;
    for(int j=0;j<k;j++)
    {
        for(i=0;i<k;i++)
        {
            if(c[i]>c[i+1])
            {
                int temp=c[i];
                c[i]=c[i+1];
                c[i+1]=temp;
            }
        }
    }
    for(i=0;i<k;i++)
    {
        printf(" %d",c[i]);
    }
}

int main()
{
    int a[]={1,2,3,4,5};
    int b[]={6,9,7,8};
    int c[9];
    int n=5;
    int m=4;
    merge(a,b,c,n,m);
    print(c,m,n);
    return 0;
}
