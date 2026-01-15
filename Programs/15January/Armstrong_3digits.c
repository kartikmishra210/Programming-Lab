//Check if given number is Armstrong number

#include<stdio.h>

int main() {

int n,m,a;

printf("Enter a number : ");
scanf("%d",&n);

a=0;
m=n;

while(m!=0){
a+=(m%10)*(m%10)*(m%10);
m/=10;
}

if(a==n)
printf("%d is an Armstrong Number!!",n);

else
printf("Not an Armstrong Number!!");

return 0;
}
