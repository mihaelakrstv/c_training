#include <stdio.h>
int func(int n, int counter)
{
int i; int frst; int min;
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
}
int main(void){
int n;
printf("enter n\n");
scanf("%d\n", &n);
int counter=0;
int result=func(n, counter);
printf("result is:\n");
printf("%d\n", result);
return 0;
}
