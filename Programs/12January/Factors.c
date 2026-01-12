//Display all factors of a number

#include<stdio.h>

int main(){

int n, i;

i=1;

printf("Enter a number : ");
scanf("%d",&n);

while(i<=n){

if(n%i == 0)
printf("%d is a factor! \n", i);

i++;
}

return 0;
}
