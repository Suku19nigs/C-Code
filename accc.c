# include <stdio.h>
void main()
{
int a[][];
int i,j;
int r,c;
int cr,cc,er,ec;
i=0;
j=0;
cr=0;
cc=0;
er=r;
ec=c;

while(i<r&&j<c)
{
for(i=cc;i<ec;i++)
{
printf("%d",a[cr][i]);
}
cr=j+1;
cc=i-1;

for(
