//Question 2 from Questions.md


#include<stdio.h>

int main(){

float n,f;

printf("Enter n for which series will be calculated : ");
scanf("%d", &n);

for(f;n>0;n--) f+=1/n;

printf("The value is : %f", f);

return 0;

}
