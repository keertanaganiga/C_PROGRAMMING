
/*
Input: [1,2,3,4,5]
Output: Node 3 from this list (Serialization: [3,4,5])
The returned node has value 3.  (The judge's serialization of this node is [3,4,5]).
Note that we returned a ListNode object ans, such that:
ans.val = 3, ans.next.val = 4, ans.next.next.val = 5, and ans.next.next.next = NULL.
*/

#include <stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};



struct node* middleList(struct node *head)
{
    struct node *fast,*slow;
    slow=fast=head;
    while(fast && fast->next)
    {
        fast=fast->next->next;
        slow=slow->next;
    }
    return slow;
}

int main()
{
    struct node *temp,*newnode;
    
    struct node *head=NULL;
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
    struct node* r=middleList(head);
    printf("The middle node is :%d",*r);
    return 0;
}
