#include <stdio.h>
int main(void){
char arr[5]; int i;
for (i=0;i<=5;i+=1){
printf("enter character\n");
scanf("%c\n", &arr[i]);
if (arr[0]=='y'){
printf("yes\n");
break;
}
}
return 0;
}
