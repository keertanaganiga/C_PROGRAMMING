
#include <stdio.h>

struct node
{
    int data;
    struct node *next;
};

int main()
{
    struct node *temp,*newnode;
    struct node *head=NULL;
    int n,i;
    printf("Enter the number of nodes");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data");
    scanf("%d",&(newnode->data));
    newnode->next=0;
    
        if(head==0)
        {
            head=temp=newnode;
        }
        else
        {
           temp->next=newnode;
           temp=newnode;
        }
    }
    temp=head;
    while(temp!=0)
    {
        printf("->%d",temp->data);
        temp=temp->next;
    }
    
    return 0;
}
