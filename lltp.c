# include <stdio.h>

struct node
{
int d;
struct node* next;
}

struct node* add(struct node* a,struct node* b)
{
struct node* h=(struct entry*)malloc(sizeof(struct entry));
h->d=0;
h->next=NULL;
struct node* temp1=a;
struct node* temp2=b;
struct node* temp=h;

int v=0;
int r=0;

while(temp1->next!=NULL)
{
v=(temp1->d)+(temp2->d);
v=palindrome(v);

while(v!=0)
{
r=v%10;
temp->d=r;
temp=temp->next;
v/=10;
}
temp1=temp1->next;
temp2=temp2->next;
}
return h;
}

void main()
{
