# include <stdio.h>

int func(int x, int y) { 
	x=x-y++; 
	return y; 
} 

int main(void) { 
int x,y; 
x=2;
y=4;
printf(" %d,",func(x,y)); 
printf("%d",y); 
return 0; 
} 