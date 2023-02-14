#include <stdio.h>
#include <string.h>

int is_lowercase(char *str){
    int i = 0;
    for (;i<strlen(str);i++){
        if (str[i]<'a' || str[i]>'z'){
            return 0;
        }
    }
    return 1;
}

int main(){

    char str[100];
    gets(str);

    if (is_lowercase(str)){
        printf("%s is all lowercase\n", str);
    }
    else {
        printf("%s is not all lowercase\n", str);
    }

    return 0;
}
