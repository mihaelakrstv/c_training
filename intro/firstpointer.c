#include <stdio.h>
int main(void){
int a; double b; float c; int *p; double *p1;
printf("enter a\n");
scanf("%d\n", &a);
printf("enter b\n");
scanf("%f\n", &b);
*p=&a;
printf("adress of a is:%p\n", *p);
printf("adress of b is:%p\n", &b);
return 0;
}
