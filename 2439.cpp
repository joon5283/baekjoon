#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
	int a;
	int i, j, k;

	scanf("%d", &a);

	for(i=1; i<=a; i++){
		for(j=i; j<a; j++)
			printf(" ");
		for(k=1; k<=i; k++)
			printf("*");
		printf("\n");
	}


	return 0;
}