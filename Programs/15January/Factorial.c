//Prints factorial of a number

#include<stdio.h>

int main() {

int n;
double f;

f=1;

printf("Enter a number : ");
scanf("%d",&n);

while(n>=1) f=f*n, n--; 

printf("%f is the factorial!\n",f);

return 0;

}
