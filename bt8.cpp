#include <stdio.h>
#include <string.h>
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
int main() {
    char chuoi_A[MAX_SIZE];
    char chuoi_B[MAX_SIZE];
    char *ket_qua_tim_kiem;
    nhapChuoi(chuoi_A, "1. Nhap chuoi A: ");
    nhapChuoi(chuoi_B, "2. Nhap chuoi B: ");
    ket_qua_tim_kiem = strstr(chuoi_A, chuoi_B);
    if (ket_qua_tim_kiem != NULL) {
        printf("hop le\n");
    } else {
        printf("khong hop le\n");
    }
    return 0;
}
