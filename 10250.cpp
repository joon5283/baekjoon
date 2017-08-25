#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){

	int H, W, N, testcase;
	int div, res;
	scanf("%d", &testcase);

	while(testcase--){
		scanf("%d %d %d", &H, &W, &N);
	
		div = N / H;
		res = N % H;

		if(res == 0){
			printf("%d", H);
			printf("%02d\n", div);
		}else{
			printf("%d", res);
			printf("%02d\n", div+1);
		}
	}
	return 0;
}