#include<stdio.h>
#include<math.h>
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

void print(int c[],int k)
{
    int i;
    float median;
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
   
}

float median(int c[],int k)
{
    float median;
    if(k%2!=0)
        median=c[k/2];
    else
        median=(c[(k-1)/2] + c[k/2])/2.0;
    return median;
}
int main()
{
    float median1;
    int a[]={1,2};
    int b[]={3,4};
    int c[9];
    int n=2;
    int m=2;
    int k=m+n;
    merge(a,b,c,n,m);
    print(c,k);
    median1=median(c,k);
    printf("%f",median1);
    return 0;
}
