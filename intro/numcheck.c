#include <stdio.h>
int main(void){
int a;
printf("enter a:\n");
scanf("%d", &a);
if ((a<10) && (a%1==0) && (a%a==0)){
printf("true\n");}
else printf("false\n");
return 0;
}
