//Prints the Fibonacci Series

#include<stdio.h>

int main(){

int a=0,b=1,n;

printf("Enter number of iterations : ");
scanf("%d",&n);

for(int i=1;i<=n;i++){

if(i==1)
printf("%d %d ",a,b);

else
printf("%d ",b);

b=a+b;
a=b-a;

}

return 0;

}
