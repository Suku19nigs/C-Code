# include <stdio.h>
void main()
{
char j[10] = "hello";
char* c="hello";

//c = j;
*c='k';

printf("%s\n",c);

}
