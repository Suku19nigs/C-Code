# include <stdio.h>

void main()
{
int a=90;
int b=90;
int c=20;
a%=c+2;
b=b%(c+2);
printf("%d",a);
printf("%d",b);
}