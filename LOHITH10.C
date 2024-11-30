#include<stdio.h>
int main()
{
int num;
printf("enter the number:");
scanf("%d",&num);
if(num > 0){
printf("%d is possitive");
}else if(num<0){
printf("%d is negative");.
}else{
printf("%d is zero");
}
return 0;
}