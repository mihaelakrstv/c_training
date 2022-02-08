#include <stdio.h>
#include <stdlib.h>
int main(void){
char a;
int b;
printf("enter a\n");
scanf("%c", &a);
b=atoi(a);
printf("result\n");
printf("%d", b);
return 0;
}
