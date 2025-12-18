#include <stdio.h>

int main() {

int a, b;

printf("Enter two numbers a:b \n");
scanf("%d:%d", &a, &b);

if (a>b)
printf("%d is the greater one.", a);

else if (a==b)
printf("Both equal bruh -_-");

else
printf("%d is the greater one.", b);

return 0;
}
