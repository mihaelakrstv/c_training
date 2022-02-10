#include <stdio.h>
int main(void){
char f;
printf("enter char:\n");
scanf("%c", &f);
if ((f>=65) && (f<=90)){
printf("capital letter\n");}
else if ((f>=97) && (f<=122)){
printf("normal letter\n");}
else printf("special character\n");
return 0;
}
