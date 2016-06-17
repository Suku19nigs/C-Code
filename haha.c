# include <stdio.h>

void main()
{
printf("%d",foo("apple","ball"));
}

int foo(char s1[ ], char s2 [ ]) { 
 int i,j; 
 i=j=0; 
 while(*(s1+i)) i++; 
 while(*(s2+j)) j++; 
 printf("%d",i-j); 
} 