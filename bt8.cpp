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
int is_substring_by_index(char A[], char B[]) {
    int lenA = (int)strlen(A);
    int lenB = (int)strlen(B);
    
    if (lenB > lenA) {
        return 0;
    }
    for (int i = 0; i <= lenA - lenB; i++) {
        int match = 1;
        for (int j = 0; j < lenB; j++) {

            if (A[i + j] != B[j]) {
                match = 0; 
                break;     
            }
        }
        if (match) {
            return 1;
        }
    }
    return 0; 
}

int main() {
    char chuoi_A[MAX_SIZE];
    char chuoi_B[MAX_SIZE];
    int ket_qua; 
    nhapChuoi(chuoi_A, "1. Nhap chuoi A: ");
    nhapChuoi(chuoi_B, "2. Nhap chuoi B: ");
    ket_qua = is_substring_by_index(chuoi_A, chuoi_B);
    if (ket_qua) {
        printf("hop le \n");
    } else {
        printf("khong hop le \n");
    }
    return 0;
}
