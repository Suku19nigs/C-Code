# include <stdio.h>

struct student{ 
int age; 
}; 

int f1(struct student *std){ 
 return std->age-(*std).age; 
}

void main()
{
struct student s;
s.age=10;
printf("%d",f1(&s));
} 