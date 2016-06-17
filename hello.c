# include <stdio.h>
void main(int argc, char *argv[])
{
int i=0;
printf("%d\n", argc);

for(i=1; i<argc; i++){
   printf("%s\n", argv[i]);
}

}