#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
	int A, B, C;

	scanf("%d %d %d", &A, &B, &C);

	if(A >= B && A <= C)
		printf("%d\n", A);
	else if(A <= B && A >= C)
		printf("%d\n", A);
	else if(B >= A && B <= C)
		printf("%d\n", B);
	else if(B <= A && B >= C)
		printf("%d\n", B);
	else
		printf("%d\n", C);

	return 0;
}