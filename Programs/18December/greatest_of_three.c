#include <stdio.h>

int main() {

int a, b, c;

printf("Enter three numbers in the format a:b:c \n");
scanf("%d:%d:%d", &a, &b, &c);

if (a>b && a>c)
printf("%d is the greatest of three.", a);

else if (b>a && b>c)
printf("%d is the greatest of three.", b);

else if (c>b && c>a)
printf("%d is the greatest of three.", c);


else if (c==b && c==a)
printf("Everything is equal gng.");

else
printf("Invalid Input gng.");

return 0;

}
