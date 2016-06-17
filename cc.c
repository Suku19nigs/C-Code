# include <stdio.h>
void main()
{
 int i=1,j=0; 
 while (i<100) 
 { 
 while (j < 100) 
 { 
 if (j%100 != 0) 
 continue;break;
 printf ("BITS PILANI\n"); 
 j++; 
 } 
 i++; 
 j=1; 
 } 
}