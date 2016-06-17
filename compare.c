#include <stdio.h>

int strlength(char* a)
{
int i;
for(i=0;a[i]!='\0';i++);
return i;
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

void main()
{
char* b="hello";
char* a="hi";

int z=strcompare(a,b);

if(z>0)printf("%s",a);
else if(z<0)printf("%s",b);
else printf("equal");
}