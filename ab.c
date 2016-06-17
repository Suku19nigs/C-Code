#include <stdio.h>

void strcopy(char *s1, char *s2){
int i = strlength(s2), j;

for (j = 0; j<=i; j++){
	s1[j] = s2[j];	
}
printf("%s\n", s1);
}

void main()
{
	char a[10]="hello";
	printf("%d\n",strlength(a));
	char b[strlength(a)];
	
	strcopy(b,a);
	printf("%s\n",b);
}

int strlength(char* a)
{
int i;
for(i=0;a[i]!='\0';i++);
return i;
}


