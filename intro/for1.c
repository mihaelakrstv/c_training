#include <stdio.h>
int main(void){
int i; 
for (i=1;i<=10;i+=1){
if (i%2==0){
printf("fizz\n");
}
else if(i%5==0){
printf("buzz\n");
}
}
return 0;
}
