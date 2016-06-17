#include <stdio.h>
#include <stdlib.h>

int strlength(char* a)
{
int i;
for(i=0;a[i]!='\0';i++);
return i;
}

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

int strcompare(char* a,char* b)
{
int al=strlength(a);
int bl=strlength(b);

int min=0;

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

void main()
{
char* a="helloworld";
char* b="hi";

printf("%x",strstring(&a,b));
}






