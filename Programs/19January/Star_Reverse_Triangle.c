//Question 2 from Questions.md

#include<stdio.h>

int main(){

for(int i=4;i>=0;i--){

for(int s=i;s>=0;s--){
printf(" ");
}

for(int j=0;j<=(4-i);j++){
printf("*");
}
printf("\n");

}

return 0;

}
