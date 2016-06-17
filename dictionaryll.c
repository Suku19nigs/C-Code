# include <stdio.h>
# include <stdlib.h>
# include "Stringlib.h"

struct entry{
struct entry* next;
char* word;
char* mean;
};

void addWord(char* w,char* m,struct entry* h)
{

if(h->word==NULL)
{
strcopy(w,&(h->word));
strcopy(m,&(h->mean));
}

else
{
   struct entry* temp;
   temp=h;

   while(temp->next!=NULL)
   {
     temp=temp->next;
   }
   struct entry* add;
   add=(struct entry*)malloc(sizeof(struct entry));
   temp->next=add;
   strcopy(w,&add->word);
   strcopy(m,&add->mean);
   add->next=NULL;
}

printf("word added\n");
}

void removeWord(char* w,struct entry** h)
{
struct entry* temp;
struct entry* prev;
temp=*h;
prev=NULL;

while(temp!=NULL&&strcompare(temp->word,w)!=0)
{
prev=temp;
temp=temp->next;
}
struct entry* req;
req=temp;
if(temp==NULL)
{
printf("word not found\n");
return;
}

if(prev==NULL)
{
*h=req->next;
req->word=NULL;
req->mean=NULL;
free(req);
}
else
{
prev->next=req->next;
req->word=NULL;
req->mean=NULL;
free(req);
}
printf("word removed\n");
}

void referWord(char* w,struct entry* h)
{
struct entry* temp;
temp=h;
while(temp!=NULL)
{
if(strcompare(temp->word,w)==0)
{
printf("%s\n",temp->word);
printf("%s\n",temp->mean);
return;
}
temp=temp->next;
}
printf("word not found\n");
}

void viewlist(struct entry* h)
{
struct entry* temp;
temp=h;

while(temp!=NULL)
{
printf("%s\n",temp->word);
printf("%s\n\n",temp->mean);
temp = temp->next;
}
}

void main(int argc,char* argv[])
{
struct entry* head;
head=(struct entry*)malloc(sizeof(struct entry));
head->next=NULL;
head->word=NULL;
head->mean=NULL;

int wl=atoi(argv[1]);
int ml=atoi(argv[2]);

char ww[wl];
char mm[ml];

do
{

printf("click 1 to add an entry to the dictionary\n");
printf("click 2 to refer a word from the dictionary\n");
printf("click 3 to remove a word from the dictionary\n");
printf("click 4 to view the dictionary\n");
printf("click 5 to exit\n");

int ch=0;
scanf("%d",&ch);

switch(ch)
{
case 1: 
printf("enter the word\n");
scanf("%s",ww);
printf("enter the meaning\n");
scanf("%s",mm);
addWord(ww,mm,head);
break;

case 2:
printf("enter the word\n");
scanf("%s",ww);
referWord(ww,head);
break;

case 3:
printf("enter the word\n");
scanf("%s",ww);
removeWord(ww,&head);
break;

case 4:
viewlist(head);
break;

case 5:
exit(0);

default:
printf("wrong choice");
}
}while(1==1);
}
