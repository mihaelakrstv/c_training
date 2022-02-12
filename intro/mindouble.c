#include <stdio.h>
int main(void){
int n; int i; int frst; int min; int counter;
printf("enter n\n");
scanf("%d\n", &n);
int arr[n];
for (i=1;i<=n;i+=1){
printf("enter element\n");
scanf("%d\n", &arr[i]);
counter+=1;
frst=arr[0];
if (frst<arr[i]){
min=frst;
}
}
printf("%d\n", min);
printf("%d\n", counter);
return 0;
}
