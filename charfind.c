#include <stdio.h>

int strlength(char* a)
{
int i;
for(i=0;a[i]!='\0';i++);
return i;
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

void main()
{
char* a="hello";
char b='o';

printf("%x",strchar(&a,b));
}