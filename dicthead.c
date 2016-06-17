# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include "Stringlib.h"
# include "dicthead.h"

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

//printf("word added\n");
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
//printf("word removed\n");
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

int  matchFirstWord(char* w,struct entry* h)
{
struct entry* temp;
temp=h;
char* fw;
char* ret;

while(temp!=NULL)
{
fw=strdup(strtok(temp->word," "));

if(strcompare(fw,w)==0)
{
strcopy(temp->word,&ret);
return 1;
}
temp=temp->next;
}
return 0;
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
