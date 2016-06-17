# include <stdio.h>
# include <string.h>
# include <stdlib.h>

int i;
int j;

void genericsort(int l,void* a,int(*f)(void*,void*),unsigned int s)
{
char* t = (char*)malloc(s);
for(i=0;i<l;i++)
{
for(j=0;j<l-i-1;j++)
{
char* ap=((char *)a)+(s*j);
char* bp=((char *)a)+(s*(j+1));

int r=f(ap,bp);
if(r>=0)
{

memcpy(t,ap,s);
memcpy(ap,bp,s);
memcpy(bp,t,s);
}
}
} 
}

int intf(void* a,void* b)
{
int* ap=a;
int* bp=b;

int av=*ap;
int bv=*bp;

if(av>bv)return 1;
else if(av==bv) return 0;
else return -1;
}

void print(int a[],int l)
{
for(i=0;i<l;i++)
printf("%d ",a[i]);
printf("\n");
}

void main()
{
int a[]={1,4,3,2};

int l=sizeof(a)/sizeof(a[0]);
print(a,l);

int (*fp)(void*,void*);
fp=&intf;

genericsort(l,a,fp,sizeof(a[0]));
print(a,l);
}









