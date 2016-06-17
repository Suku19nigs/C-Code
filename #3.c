# include <stdio.h>

void main()
{
int a[]={16,17,4,3,5,2};
int i,j;
int c=0;
int l=sizeof(a)/sizeof(a[0]);

for(i=l-1;i>=0;i--)
{
c=0;
for(j=i;j<l;j++)
{
if(a[i]>=a[j])
c++;
}
if(c==l-i)
printf("%d ",a[i]);
}
}