//Question 2 from Questions.md

#include<stdio.h>

int main(){

for(int i=0;i<4;i++){

for(int s=3;s>=i;s--){
printf(" ");
}

for(int j=0;j<=i;j++){
printf("* ");
}
printf("\n");

}

return 0;

}
