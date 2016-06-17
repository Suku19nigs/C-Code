#include <stdio.h>

int sum = 0;

void mydiv(){
  printf("sum before: %d\n", sum);  
  sum = 100;
  printf("sum: %d\n", sum);
}

