#include <stdio.h>

int main() {

int a, b, c, d, e, avg;

printf("Please enter marks of 5 subjects in the following manner : MMM MMM MMM MMM MMM \n");
scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

avg = (a+b+c+d+e)/5;

if (avg>=90 && avg<=100)
printf("You've got O Grade!");

else if (avg>=80 && avg<90)
printf("You've got E Grade!");

else if (avg>=70 && avg<80)
printf("You've got A Grade!");

else if (avg>=60 && avg<70)
printf("You've got B Grade!");

else if (avg>=50 && avg<60)
printf("You've got C Grade!");

else if (avg>=40 && avg<50)
printf("You've got D Grade!");

else if (avg>=30 && avg<40)
printf("You've got F Grade!");

else
printf("Invalid or you've got an un-tell-able grade gng :(");

return 0;
}
