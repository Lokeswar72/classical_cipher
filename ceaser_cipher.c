#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define SIZE 110

void caser(int key, char PT[]) {
    int i = 0;
    char ch;
    char CT[SIZE]; // better to use a fixed size array

    while (PT[i] != '\0') {
        ch = PT[i];
        if (isalpha(ch)) {
            if (islower(ch)) {
                ch = ((ch - 'a' + key) % 26) + 'a';
            } else if (isupper(ch)) {
                ch = ((ch - 'A' + key) % 26) + 'A';
            }
        }
        CT[i] = ch;
        i++;
    }

    CT[i] = '\0';
    printf("Cipher Text: %s\n", CT);
}

int main() {
    int key;
    char PT[SIZE];

    printf("Enter plain text: ");
    scanf("%[^\n]", PT); // read full line with spaces

    printf("Enter the key value: ");
    scanf("%d", &key);

    caser(key, PT);
    return 0;
}
