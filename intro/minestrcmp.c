#include <stdio.h>
int minestrcmp(char strcmp1[], char strcmp2[]){
int i; int n=5;
for(i=0;i<=n;i+=1){
if(strcmp1[i]==strcmp2[i]){
return 0;
}
else if(strcmp1[i]<=strcmp2[i]){
return -1;
}
else{return +1;}
}
}
int main(void){
char strcmp1[5]="vhrtl";
char strcmp2[5]="abcde";
int k=minestrcmp(strcmp1, strcmp2);
printf("result is:\n");
printf("%d\n", k);
return 0;
}
