# include <stdio.h>

void main()
{
int i=1;
int n;
printf("enter n\n");
scanf("%d",&n); 
int j=1;
int sum=1;

while(j<=n)
{
printf("%d ",i);
i=10*i+1;
i*=j;
j++;
sum+=i;
}
printf("\n");
printf("%d",sum);
}