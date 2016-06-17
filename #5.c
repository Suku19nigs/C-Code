# include <stdio.h>

void main()
{
int a[]={1,2,3,4,7,8,10,11};
int b[]={2,4,6,7,8,9,10};

int al=sizeof(a)/sizeof(a[0]);
int bl=sizeof(b)/sizeof(b[0]);

int i,j;
i=0;
j=0;

while(i<al||j<bl)
{
if(a[i]==b[j])
{
printf("%d ",a[i]);
i++;
j++;
}
else if(a[i]>b[j])
{
j++;
}
else
i++;
}
}