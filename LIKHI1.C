#include<stdio.h>
int main()
{
int i,num,isPrime=1;
printf("enter number\n");
scanf("%d",&num);
for(i=2; i<=num/2;i++){
if(num % i == 0){
isPrime = 0;
break;
}
}
if(isPrime && num > 1){
printf("%d is a Prime number\n",num);
}else{
printf("%d is not a Prime number\n",num);
}
return 0;
}