#include<stdio.h>
#define MAX 200
#include<string.h>

void inputString(char str[]);
int isPalindrome(char str[]);
void inputString(char str[]){
	printf("nhap vao 1 loai thuoc: ");
	fgets(str,MAX,stdin);
	str[strcspn(str,"\n")]='\0';
}
int isPalindrome(char str[]){
	if(strlen(str)<1){
		return 0;
	}
	int n = strlen(str);
	for(int i=0;i<n/2;i++){
		if(str[i]!=str[n-1-i]){
			return 0;
		}
	}
	return 1;
}
int main() {
	char myString[50];
	inputString(myString);
	if(isPalindrome(myString)){
		printf("la palindrome");
	}else{
		printf("khong la palindrome");
	}
	
	
return 0;
}
