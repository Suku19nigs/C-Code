#include <stdio.h>
#include <stdlib.h>

int strlength(char* a)
{
int i;
for(i=0;a[i]!='\0';i++);
return i;
}

void strcopy(char* s1, char **s2)
{
int i;
*s2= (char *)malloc(strlength(s1)*sizeof(char));
for(i=0;i<strlength(s1);i++)
{
*((*s2) +i)=s1[i];
}
}


char * strcopy1(char* s1)
{
int i;
char *s2= (char *)malloc(strlength(s1)*sizeof(char));
for(i=0;i<strlength(s1);i++)
{
s2[i]=s1[i];
}

return s2;

}

void main()
{
char a[10]="hello";
char *c;
char *b;
 
printf("%d\n",strlength(a));
b = strcopy1(a);

strcopy(a,&c);

printf("a: %s \nb: %s \nc: %s\n",a,b,c);
}

