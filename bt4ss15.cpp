#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_SIZE 200
void clear_newline(char str[]) {
    size_t len = strcspn(str, "\n");
    if (str[len] == '\n') {
        str[len] = '\0';
    }
}
void removeChar(char str[], char char_to_remove) {
    int i, j;
    i = 0;
    j = 0;
    while (str[i] != '\0') {
        if (str[i] != char_to_remove) {
            str[j] = str[i];
            j++; 
        }
        i++;
    }
    str[j] = '\0';
}
int main() {
    char str[MAX_SIZE];
    char char_to_remove;
    char buffer[10];
    printf("1. Nhap vao mot chuoi bat ky: ");
    fgets(str, MAX_SIZE, stdin);
    clear_newline(str); 
    printf("2. Nhap vao mot ky tu can xoa (vi du: a): ");
    fgets(buffer, sizeof(buffer), stdin);
    clear_newline(buffer);
    char_to_remove = buffer[0];
    removeChar(str, char_to_remove);
    printf("\nChuoi sau khi da xoa tat ca ky tu '%c':\n", char_to_remove);
    printf("%s\n", str);
    return 0;
}
