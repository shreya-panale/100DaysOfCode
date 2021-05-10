#include <stdlib.h>
#include <stdio.h>	
typedef struct Node
{
    int data;
    struct Node* next;
}Node;

Node* insert(Node *head,int data)
{
    //Complete this function
    Node* new_node = (Node*)malloc(sizeof(Node));
    new_node->next = NULL;
    new_node->data = data;

    if(head == NULL)
        return new_node;

    Node *temp = head;
    while(temp->next != NULL)
        temp = temp->next;
    temp->next = new_node;

    return head;
}

void display(Node *head)
{
	Node *start=head;
	while(start)
	{
		printf("%d ",start->data);
		start=start->next;
	}
}
int main()
{
	int T,data;
    scanf("%d",&T);
    Node *head=NULL;	
    while(T-->0){
        scanf("%d",&data);
        head=insert(head,data);
    }
  display(head);
		
}
