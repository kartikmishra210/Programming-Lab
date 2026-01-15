//Checks if a number is prime

#include<stdio.h>

int main(){

int n,f;

printf("Enter a number : ");
scanf("%d",&n);

for(int i=1;i<=n;i++) {
if(n%i==0)
f+=i;
}

if(f==n+1)
printf("%d is a prime!!",n);

else
printf("%d is NOT a prime :(",n);

return 0;

}
