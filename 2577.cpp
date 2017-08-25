#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(){

	int a[10] = {0};
	int A, B, C, i, res;
	unsigned long long total;

	scanf("%d", &A);
	scanf("%d", &B);
	scanf("%d", &C);

	total = A * B * C;

	while(total != 0){
		res = total % 10;
		total = total / 10;
		a[res]++;
	}

	for(i=0; i<10; i++)
		printf("%d\n", a[i]);

	return 0;
}