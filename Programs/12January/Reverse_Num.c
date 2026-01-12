//Reverse a user entered number

#include<stdio.h>

int main() {

int num;

printf("Enter a number : ");
scanf("%d", &num);

while(num) {

printf("%d", num%10);
num/=10;
}

return 0;

}
