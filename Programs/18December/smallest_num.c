#include <stdio.h>

int main() {

int a, b;

printf("Enter two numbers a:b \n");
scanf("%d:%d", &a, &b);

if (a>b)
printf("%d is the smaller one.", b);

else if (a==b)
printf("Both equal bruh -_-");

else
printf("%d is the smaller one.", a);

return 0;
}
