# include <stdio.h>
void main()
{
int a;
int b=21;
int c=7;
a=(b+c)*c%b++;

printf("%d",a);
}