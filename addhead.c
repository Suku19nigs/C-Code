# include <stdio.h>
# include <stdlib.h>

struct node
{
int data;
struct node* next;
};

void add(struct node* head,int a)
{
struct node* temp;
temp=(struct node*)malloc(sizeof(struct node));
temp->data=a;
temp->next=NULL;

temp->next=head;
head=temp;
printf("%d",head->data);
}

void printList(struct node* head)
{
struct node* temp=head;

while(temp!=NULL)
{
printf("%d",temp->data);
temp=temp->next;
}
}

void main()
{
struct node* head;
head=(struct node*)malloc(sizeof(struct node));
head->data=10;
head->next=NULL;

add(head,20);
printList(head);
}