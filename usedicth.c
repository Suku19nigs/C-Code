# include <stdio.h>
# include <stdlib.h>
# include "Stringlib.h"
# include "dicthead.h"

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