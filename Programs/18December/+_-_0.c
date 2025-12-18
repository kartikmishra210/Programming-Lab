#include <stdio.h>

int main() {

int n;

printf("Please enter the number to be checked : \n");
scanf("%d", &n);

if (n>0)
printf("The number seems to be positive");

else if (n==0)
printf("The number is 0");

else
printf("The number seems to be negative");

return 0;

}
