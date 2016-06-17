# include <stdio.h>

void main() 
{ 
int a=0;
int b=0;
int c = a || --b; 
int d = a-- && --b; 
printf ("a = %d, b = %d, c = %d, d = %d", a, b, c, d); 
} 