//Check Armstrong number for arbitrary digits

#include<stdio.h>
int main(){

long long num; //Store the user input here, always constant

printf("Enter the number : ");
scanf("%lld",&num);

long long cp1,cp2; //Copy of num

long long pdt,final; //pdt stores the product of a digit and final stores the sum

pdt=1,final=0; //Initialize pdt to 1 and final to 0

for(cp1=num;cp1!=0;cp1/=10){

	for(cp2=num;cp2!=0;cp2/=10){
		pdt*=cp1%10;
	}
final+=pdt;
pdt=1;
}

if(final==num)
printf("%lld is an Armstrong Number!!",num);

else
printf("%lld is NOT an Armstrong Number!!",num);

return 0;

}

