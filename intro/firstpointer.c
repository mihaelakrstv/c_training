#include <stdio.h>
int main(void){
int a; double b; float c; int *p; double *p1;
a=4; b=6.2;
p=&a;
printf("value of a is:%d\n", *p);
printf("adress of a is:%p\n", &a);
printf("address of b is:%p\n", &b);
return 0;
}
