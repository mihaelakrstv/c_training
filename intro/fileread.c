#include <stdio.h>
int main(void){
FILE *f; int n;
f=fopen("myfile", "r");
fscanf(f, "%d\n", &n);
printf("n is:%d\n", n);
fclose(f);
return 0;
}
