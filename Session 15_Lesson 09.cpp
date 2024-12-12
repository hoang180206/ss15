#include <stdio.h>
#include <string.h>

int main() {
    char str[100], ch;
    int i, j = 0;

    printf("Moi ban nhap chuoi: ");
    fgets(str, sizeof(str), stdin);

    printf("Moi ban nhap ki tu can xoa: ");
    scanf("%c", &ch);

    for (i = 0; i < strlen(str); i++) {
        if (str[i] != ch) {
            str[j++] = str[i];
        }
    }
    str[j] = '\0'; 

    printf("Chuoi sau khi xoa: %s", str);

    return 0;
}

