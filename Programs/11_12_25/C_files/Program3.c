#include <stdio.h>

int main(){

int a, b, c;

a = 10;

b = 20;

printf("Values are a, b : %d %d \n", a, b);

c = b;

b = a;

a = c;

printf("Swapped values are a, b : %d %d", a, b);

return 0;

}
