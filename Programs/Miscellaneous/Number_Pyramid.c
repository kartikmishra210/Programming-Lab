//Question 5 from Questions.md

#include<stdio.h>

int main(){

for(int i=5;i>=0;i--){
for(int k=(5-i);k>=0;k--) printf(" ");
for(int j=i;j>0;j--) printf("%d ",j);
printf("\n");
}

return 0;

}
