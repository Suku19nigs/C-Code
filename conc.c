#include <stdio.h>
#include <stdlib.h>

int strlength(char* a)
{
int i;
for(i=0;a[i]!='\0';i++);
return i;
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

void main()
{
char* a="hi";
char* b="hello";
printf("%s",concat(a,b));
}