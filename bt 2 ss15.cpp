#include <stdio.h>
#include <string.h>
#define MAX 200

void inputString(char str[]);
void converseToUpper(char str[]);
void converseToLower(char str[]);

int main(){
	char myString[MAX];

	inputString(myString);
	printf("\nChuoi ban dau:  %s",myString);
	converseToUpper(myString);
	printf("\nChuoi viet hoa:  %s",myString);
	converseToLower(myString);
	printf("\nChuoi viet thuong:   %s",myString);
}

void inputString(char str[]){
	printf("Nhap vao 1 chuoi bat ki: ");
	fgets(str,MAX,stdin);
	str[strcspn(str,"\n")] = '\0';
}

void converseToUpper(char str[]){
	int n = strlen(str);
	for(int i=0;i<n;i++){
		if(str[i]>=97 && str[i]<=122){
			str[i] = str[i] - 32;
		}
	}
}
void converseToLower(char str[]){
	int n = strlen(str);
	for(int i=0;i<n;i++){
		if(str[i]>=65 && str[i]<=90){
			str[i] = str[i] + 32;
		}
	}
}
