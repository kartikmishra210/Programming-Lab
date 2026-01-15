//Prints series with 2n+1 increment

#include<stdio.h>

int main(){
int n,f;
f=1;
printf("Enter number of iterations : ");
scanf("%d",&n);

while(n) printf("%d ",f), f=(2*f)+1, n--;

return 0;
}
