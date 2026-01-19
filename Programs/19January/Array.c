//Program to check various Array things

#include<stdio.h>

int main(){
int arr[5] = {1,2,3,4,5};
int garb[5] = {};
int half[5] = {1,2};
int zero[5] = {0};
int zer[0] = {};

for(int i=0;i<5;i++){ printf("Value of arr[%d] : %d\n",i,arr[i]), printf("\n");}

for(int i=0;i<5;i++) printf("Value of garb[%d] : %d\n",i,garb[i]), printf("\n");       

for(int i=0;i<5;i++) printf("Value of half[%d] : %d\n",i,half[i]), printf("\n");       

for(int i=0;i<5;i++) printf("Value of zero[%d] : %d\n",i,zero[i]), printf("\n");       

for(int i=0;i<5;i++) printf("Value of zer[%d] : %d\n",i,zer[i]), printf("\n");

return 0;

}
