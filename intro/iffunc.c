#include <stdio.h>
int iffunc(int a, int b){
if (a<100){
if (a%5==0){
b=b+1; 
printf("%d\n", b);}
}
else printf("error:\n");
return 0;
}
int main(void){
int a,b,result;
printf("enter a\n");
scanf("%d\n", &a);
printf("enter b\n");
scanf("%d\n", &b);
result=iffunc(a,b);
printf("result is:\n");
printf("%d\n", result);
return 0;
}
