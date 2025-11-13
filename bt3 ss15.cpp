#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h> 
#define MAX 100
void clear_newline(char str[]) {
    size_t len = strcspn(str, "\n");
    if (str[len] == '\n') {
        str[len] = '\0';
    }
}
void nhapChuoi(char str[], const char *prompt) {
    printf("%s", prompt);
    fgets(str, MAX, stdin); 
    clear_newline(str);
}
void noiChuoi_strcat() {
    char str1[MAX * 2];
    char str2[MAX];
    nhapChuoi(str1, "1. Nhap chuoi thu nhat (str1): ");
    nhapChuoi(str2, "2. Nhap chuoi thu hai (str2): ");
    strcat(str1, str2); 
    printf("Chuoi sau khi noi (str1 + str2): %s\n", str1);
}
void noiChuoi_vongLap() {
    char strA[MAX * 2];
    char strB[MAX];
    nhapChuoi(strA, "1. Nhap chuoi thu nhat (strA): ");
    nhapChuoi(strB, "2. Nhap chuoi thu hai (strB): ");
    int i = 0;
    while (strA[i] != '\0') {
        i++;
    }
    int j = 0;
    while (strB[j] != '\0') {
        strA[i] = strB[j];
        i++;
        j++;
    }
    strA[i] = '\0';
    printf("Chuoi sau khi noi (strA + strB): %s\n", strA);
}
int main() {
    noiChuoi_strcat();
    noiChuoi_vongLap();
    return EXIT_SUCCESS;
}
