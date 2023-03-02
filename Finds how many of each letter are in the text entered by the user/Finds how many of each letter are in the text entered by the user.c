#include <stdio.h>
#include <ctype.h>

int main() {
    char text[1000];
    int i, frequency[26] = {0};

    printf("Enter some text: ");
    fgets(text, 1000, stdin);

    for (i = 0; text[i] != '\0'; i++) {
        if (isalpha(text[i])) {
            frequency[tolower(text[i]) - 'a']++;
        }
    }

    for (i = 0; i < 26; i++) {
        if (frequency[i] != 0) {
            printf("%c occurs %d times in the text.\n", i + 'a', frequency[i]);
        }
    }

    return 0;
}

