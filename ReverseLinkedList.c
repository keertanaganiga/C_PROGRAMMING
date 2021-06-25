
#include <stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *head=NULL;

int reverselist()
{
    struct node *prevnode,*currentnode,*nextnode;
    prevnode=0;
    currentnode=nextnode=head;
    while(nextnode!=0)
    {
        nextnode=nextnode->next;
        currentnode->next=prevnode;
        prevnode=currentnode;
        currentnode=nextnode;
    }
    return currentnode;
}

int main()
{
    struct node *temp,*newnode;
    int n,i;
    printf("Enter the number of nodes: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node*));
        printf("Enter the data vales: ");
        scanf("%d",&newnode->data);
        newnode->next=0;
        
        if(head==NULL)
        {
            temp=head=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
        
    }

        reverselist();
        printf("After reverse: \n");
        while(temp!=0)
        {
            printf("->%d",temp->data);
            temp=temp->next;
        }
    return 0;
}
