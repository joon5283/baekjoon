#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
	int N, X;
	int number;
	scanf("%d %d", &N, &X);

	while(N>0){
		scanf("%d", &number);
		if(number < X)
			printf("%d ", number);
		N--;
	}
	printf("\n");

	return 0;
}