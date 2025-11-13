#include <stdio.h>
#include <string.h>
#include <ctype.h> 
#include <stdlib.h>
#define MAX_SIZE 100 
void clear_newline(char str[]) {
    size_t len = strcspn(str, "\n");
    if (str[len] == '\n') {
        str[len] = '\0';
    }
}
void nhapChuoi(char str[], const char *prompt) {
    printf("%s", prompt);
    fgets(str, MAX_SIZE, stdin); 
    clear_newline(str);
}
void to_lower_case(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = tolower((unsigned char)str[i]);
    }
}
int main() {
    char str1[MAX_SIZE];
    char str2[MAX_SIZE];
    int ket_qua_so_sanh;
    nhapChuoi(str1, "1. Nhap chuoi thu nhat (str1): ");
    nhapChuoi(str2, "2. Nhap chuoi thu hai (str2): ");
    to_lower_case(str1);
    to_lower_case(str2);
    ket_qua_so_sanh = strcmp(str1, str2);
    if (ket_qua_so_sanh == 0) {
        printf("Giong nhau.\n");
    } else {
        printf("Khac nhau.\n");
    }
    return 0;
}
