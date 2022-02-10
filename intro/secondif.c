#include <stdio.h>
int main(void){
int a;
int b;
printf("enter a:\n");
scanf("%d", &a);
if (a<100){
if (a%5==0){
b=b+1; 
printf("%d\n", b);}
}
else printf("error:\n");
return 0;
}
