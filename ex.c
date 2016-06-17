# include <stdio.h>
int a=0;

int sum(int x,int y)
{
int t=x+y;
a+=t;
return t;
}
void main()
{
sum(1,2);
}
