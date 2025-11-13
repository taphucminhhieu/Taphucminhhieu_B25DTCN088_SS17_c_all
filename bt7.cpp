#include <stdio.h>
#include <string.h>

#define MAX 200

int main(){
	char stringA[MAX], stringB[MAX];
	
	printf("Nhap chuoi A: ");
	fgets(stringA,MAX,stdin);
	stringA[strcspn(stringA,"\n")] = '\0';
	printf("Nhap chuoi B: ");
	fgets(stringB,MAX,stdin);
	stringB[strcspn(stringB,"\n")] = '\0';
	int lengthA = strlen(stringA);
	int lengthB = strlen(stringB);
	
	int flag = 0;
	for(int i=0;i<lengthA;i++){
		int j = i;
		int k = 0;
		int flagTest = 1;
		while(k<lengthB){
			if(stringA[j]!=stringB[k]){
				flagTest = 0;
				break;
			}else{
				j++;
				k++;
			}
		}
		if(flagTest){
			flag = 1;
			break;
		}	
	}
	
	if(flag==1){
		printf("\nChuoi \"%s\" la chuoi con cua chuoi \"%s\"",stringB,stringA);
	}else{
		printf("\nChuoi %s khong phai la chuoi con cua chuoi %s",stringB,stringA);
	}
}

