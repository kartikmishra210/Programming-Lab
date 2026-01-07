#include <stdio.h>

int main() {
    char ch;

    printf("Enter an alphabet: ");
    scanf("%c", &ch);

if (ch >= 'A' && ch <= 'Z') {
	ch = ch + 32;
        printf("Lowercase: %c\n", ch);
} 

else if (ch >= 'a' && ch <= 'z') {
        printf("Already lowercase: %c\n", ch);
} 

else {
        printf("Invalid input! Not an alphabet.\n");
}

    return 0;
}
