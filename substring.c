#include <stdio.h>
#include <stdlib.h>

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

void main()
{
char* a="helloworld";
char b[20]
b=sstring(a,0,5);
printf("%s",b);
}
