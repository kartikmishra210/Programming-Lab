//Question 1 from Questions.md

#include<stdio.h>

int main(){

int x,n,f=1,final=0;

printf("Enter x^n as x:n - ");
scanf("%d:%d", &x, &n);

for(n;n>=0;n--){
for(int i=n;i>0;i--) f*=x;
final+=f;
f=1;
}

printf("The sum is : %d", final);
return 0;
}
