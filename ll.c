# include <stdio.h>
# include <stdlib.h>

struct node
{
int data;
struct node* next;
};

void add(struct node* h,int a)
{
struct node* new=(struct node*)malloc(sizeof(struct node));
new->next=NULL;
struct node* temp;
temp=h;

while(temp->next!=NULL)
{
temp=temp->next;
}
temp->next=new;
new->data=a;
}

void print(struct node* h)
{
struct node* temp;
temp=h->next;

while(temp!=NULL)
{
printf("%d ",temp->data);
temp=temp->next;
}
printf("\n");
}

void removeDuplicates(struct node* h)
{
struct node* temp;
temp=h->next;
int v=temp->data;

while(temp->next!=NULL)
{
if(v==(temp->next)->data)
{
struct node* t=temp->next;
temp->next=(temp->next)->next;
free(t);

if(temp->next!=NULL)
{
if(v==(temp->next)->data);
else
{
temp=temp->next;
v=temp->data;
}
}
else break;
}
else
{
v=(temp->next)->data;
temp=temp->next;
}
}
}

void moveNode(struct node** a,struct node** b)
{
struct node* temp;
temp=*b;

if(temp->next!=NULL)
{
*b=temp->next;
}
temp->next=*a;
*a=temp;
}

void main()
{
struct node* h=(struct node*)malloc(sizeof(struct node));
h->next=NULL;

struct node* h1=(struct node*)malloc(sizeof(struct node));
h1->next=NULL;

add(h,1);
add(h,2);
add(h,3);
print(h);

add(h1,1);
add(h1,2);
add(h1,3);
print(h1);

printf("%d\n",h->data);
printf("%d\n",(h->next)->data);
//moveNode(&h,&h1);

//removeDuplicates(h);
//print(h);
//print(h1);
}
