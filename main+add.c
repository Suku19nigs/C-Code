# include <stdio.h>

static int sum=0;

int add(int x,int y)
{
//static int sum=0;
sum+=x+y;
return sum;
}

void main()
{
int i=0;
int x=0;
int y=1;
for(i=0;i<5;i++)
{
printf("%d",add(x++,y++));
printf("%d",sum);
}
}