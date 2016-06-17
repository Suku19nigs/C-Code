# include <stdio.h>
# include <stdlib.h>


typedef int(*compare)(void*,void*);

int i;
int j;

void genericsort(int l,void* a,compare c,unsigned int s) {
char *array = (char *) a;
//unsigned int size = s;

for(i=0;i<l;i++) {
   for(j=0;j<l-i-1;j++) {
      if(c( array+(size*j),array + (size * (j+1)) )>=0) {
//printf("hi");
//s( array+(size*j),array + (size * (j+1)) );

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

void ints(void* a,void* b)
{
int* ap=a;
int* bp=b;
//printf("%d\n",*ap);
int t=*ap;
*ap=*bp;
*bp=t;  
}

void main()
{
int a[]={4,2,3,1};
int l=sizeof(a)/sizeof(a[0]);
print(a,l);
int (*fp)(void*,void*);
fp=&intf;
//void (*fsp)(void*,void*);
//fsp=&ints;
//int size=sizeof(a[0]);
genericsort(l,a,fp,sizeof(int));
print(a,l);
}









