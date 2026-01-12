//Prints sum of all even numbers from 1 to 50

#include<stdio.h>

int main() {

int sum, i=1;

sum=0; 

while(i<=50) {

if (i%2==0)
sum += i;

i++;
}

printf("Sum of all even numbers from 1 to 50 is : %d \n", sum);

return 0;

}
