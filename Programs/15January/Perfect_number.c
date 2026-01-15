//Check if a number is perfect or not

#include<stdio.h>

int main() {

int n,f=0;

printf("Enter a number : ");
scanf("%d",&n);

for(int i=1;i<n;i++){
if(n%i==0)
f+=i;
}

if(f==n)
printf("%d is perfect!",n);

else
printf("%d is not perfect!",n);

return 0;
}
