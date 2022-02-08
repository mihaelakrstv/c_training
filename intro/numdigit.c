#include <stdio.h>
int main(void){
int a,b,c,d;
printf("enter a\n");
scanf("%d", &a);
b=a/100;
c=a/10%10;
d=a%10;
printf("result\n");
printf("%d\n", b);
printf("%d\n", c);
printf("%d\n", d);
return 0;
}
