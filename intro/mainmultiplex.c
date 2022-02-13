#include <stdio.h>
int multiplex(int a, int b){
int res = a*b;
return res;}
int main(void){
int a,b,result;
printf("enter a\n");
scanf("%d\n", &a);
printf("enter b\n");
scanf("%d\n", &b);
result=multiplex(a,b);
printf("%d\n", result);
return 0;
}
