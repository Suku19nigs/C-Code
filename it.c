# include <stdio.h>
# include <stdlib.h>
void main()
{
int a[2];
&a=(int*)malloc(16);
a[0]=0;
a[1]=1;
printf("%d",a[3]);
}
