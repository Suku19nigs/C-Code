# include <stdio.h>

float[] sortf(float a[])
{
for(int i=0;i<a.length;i++)
{
for(int j=0;j<a.length-i-1;j++)
{
if(a[j]>a[j+1])
{
float t=a[j];
a[j]=a[j+1];
a[j+1]=t;
}
}
}
return a;
}