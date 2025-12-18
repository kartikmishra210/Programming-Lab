#include <stdio.h>

int main() {

int a, b, c, d, e;

float avg, percent;

printf("Enter marks of first subject : ");
scanf("%d", &a);

printf("Enter marks of second subject : ");
scanf("%d", &b);

printf("Enter marks of third subject : ");
scanf("%d", &c);

printf("Enter marks of fourth subject : ");
scanf("%d", &d);

printf("Enter marks of fifth subject : ");
scanf("%d", &e);

avg = (a+b+c+d+e)/5;

percent = ((a+b+c+d+e)*100)/500;

printf("The Average and Percentage is : %f %f percent", avg, percent);

return 0;

}
