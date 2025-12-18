#include <stdio.h>

int main() {

int h1, m1, s1, h2, m2, s2, ht, mt, st;
int carry;

printf("Please enter time in HH:MM:SS format");
scanf("%d:%d:%d", &h1, &m1, &s1);

printf("Please enter time in HH:MM:SS format");
scanf("%d:%d:%d", &h2, &m2, &s2);

st = s1+s2;
carry = st/60;
st = st%60;

mt = m1+m2+carry;
carry = mt/60;
mt = mt%60;

ht = h1+h2+carry;

printf("The added time HH:MM:SS is - %d:%d:%d", ht, mt, st);

return 0;

}
