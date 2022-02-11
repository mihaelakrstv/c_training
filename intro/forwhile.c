#include <stdio.h>
int main(void){
int i=1;
while (i<=100){
i=i+1;
if (i%6==0){
printf("fizz\n");
}
else if(i%3==0){
printf("buzz\n");
}
else{printf("something else\n");} 
}
return 0;
}
