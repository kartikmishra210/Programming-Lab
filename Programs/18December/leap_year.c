#include <stdio.h>

int main() {

int year;

printf("Enter a year in YYYY \n");
scanf("%d", &year);

if (year%4 == 0)
printf("Year seems to be leap.");

else
printf("Year is not leap.");

return 0;

}
