//Print Odd Numbers from 20 to 50

#include<stdio.h>

int main() {

int i=19;

while(i<50) {

i++;

if (i%2==0)
continue;

printf("%d ", i);

}

return 0;

}
