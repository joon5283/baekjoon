#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
	int a;
	int i, j;

	scanf("%d", &a);

	for(i=1; i<=a; i++){
		for(j=a; j>=i; j--)
			printf("*");
		printf("\n");
	}


	return 0;
}