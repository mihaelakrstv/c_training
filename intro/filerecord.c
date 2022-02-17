#include <stdio.h>
int main(void){
FILE *f; int n; 
f=fopen("myfile","w");
printf("enter n\n");
scanf("%d\n", &n);
fprintf(f,"%d\n",&n);
fclose(f);
return 0;
}
