#include <stdio.h>
int minestrlen(char str1[]){
int i; int counter=0; int n=3;
for(i=0;i<=n;i+=1){
if(str1[i]!='\0')
{counter++;}
}
return counter;
}
int main(void){
char str1[3]="abc";
int y=minestrlen(str1);
printf("char size is:\n");
printf("%d\n", y);
return 0;
}
