#include <stdio.h>
#include <string.h>

int is_palindrome(char *str) {
    int l = 0;
    int h = strlen(str) - 1;

    while (h > l) {
        if (str[l++] != str[h--]) {
            return 0;
        }
    }
    return 1;
}

int main()
{
    char str[50];
    printf("Write a word, let's examine whether the word is a palindrome:\n");
    scanf("%s",str);

    if (is_palindrome(str)){
        printf("%s is a palindrome\n", str);
    } else {
        printf("%s is not a palindrome\n", str);
    }


    return 0;
}
