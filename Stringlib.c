# include "Stringlib.h"
# include <stdlib.h>
# include <string.h>

char* sstring(char* a,int m,int n)
{
char* b;
b=(char*)malloc(n-m+1);

int i;int j=0;

for(i=m;i<n;i++)
{
b[j]=a[i];j++;
}
return b;
}


char* strstring(char** a,char* b)
{
int i;int c=0;int j;int bl=strlength(b);

for(i=0;i<strlength(*a);i++)
{
if(strcompare(b,sstring(*a,i,i+bl))==0){c=1;break;}
}
if(c==1)return (*a)+i;
else return "NULL";
}

int strcompare(char* a,char* b)
{
int al=strlength(a);
int bl=strlength(b);

int min=0;

if(al!=0&&bl!=0)
{
if(al>bl)min=bl;
else min=al;

int i;int c=0;

for(i=0;i<min;i++)
{
if(a[i]>b[i])c++;
else if(a[i]<b[i]) c--; 
}
return c;
}
else if(al==0&&bl==0)return 0;
else if(al>bl)return 1;
else return -1;
}

int strlength(char* a)
{
if(a!=NULL)
{
int i;
for(i=0;a[i]!='\0';i++);
return i;
}
else return 0;
}


char* concat(char* a,char* b)
{
int i=0;int j=0;
char* c=(char*)malloc(strlength(a)+strlength(b)+1);
for(;i<strlength(a);i++)
{
c[i]=a[i];
}
for(;j<strlength(b);j++)
{
c[i]=b[j];
i++;
}
return c;
}

char* strchar(char** a,char b)
{
int i;int c=0;

for(i=0;i<strlength(*a);i++)
{
if(*((*a)+i)==b){c=1;break;}
}

if(c==1)return (*a)+i;
else return "NULL";
}

void strcopy(char* s1, char **s2)
{
int i;
int length = strlength(s1) + 1;
*s2= (char *)malloc(length*sizeof(char));
for(i=0;i<length;i++)
{
*((*s2) +i)=s1[i];
}
}

int countTok(char* a)
{
    char* token;
    a=strdup(a);
    token=strtok(a," ");
    int c=0;
    while(token!=NULL)
    {
        c++;
        token=strtok(NULL," ");
    }
    return c;
}
