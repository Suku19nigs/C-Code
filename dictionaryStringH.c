# include <stdio.h>
# include <stdlib.h>
# include <string.h>

struct entry{
char* word;
char* meaning;
};

struct entry *d;
int p=0;
int i=0;
int l=0;

void addWord(char* w,char* m)
{
int s=sizeof(struct entry);

if(p==0)
{
d=(struct entry*)malloc(s);
}
else
{
d=(struct entry*)realloc(d,s*(p+1));
}

char* dw=(d+p)->word;
char* dm=(d+p)->meaning;

strcpy(w,dw);
strcpy(m,dm);

//printf("%s\n",*dw);
//printf("%s\n",*dm);
printf("Word added! \n");
p++;
}

void referWord(char* w)
{
int c=0;
for(i=0;i<p;i++)
{
char* dw=(d+i)->word;
if(dw!=NULL&&strcmp(dw,w)==0)
{
c=1;
break;
}
}
if(c==1)printf("%s\n",*((d+i)->meaning));
else printf("word not found \n");
}

void removeWord(char* w)
{
for(i=0;i<p;i++)
{
if(d[i].word!=NULL&&strcmp(d[i].word,w)==0)
{
d[i].word=NULL;
d[i].meaning=NULL;
printf("word removed! \n");
break;
}
}
}

void main()
{
do
{
printf("click 1 to add an entry to the dictionary\n");
printf("click 2 to refer a word from the dictionary\n");
printf("click 3 to remove a word from the dictionary\n");
printf("click 4 to exit\n");

int ch=0;
scanf("%d",&ch);
char ww[50];
char mm[50];

switch(ch)
{
case 1: 
printf("enter the word\n");
scanf("%s",ww);
printf("enter the meaning\n");
scanf("%s",mm);
addWord(ww,mm);
break;

case 2:
printf("enter the word\n");
scanf("%s",ww);
referWord(ww);
break;

case 3:
printf("enter the word\n");
scanf("%s",ww);
removeWord(ww);
break;

case 4:
exit(0);
break;

default:
printf("wrong choice\n");
}
}while(1==1);
}