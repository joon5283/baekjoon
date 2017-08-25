#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){

	int testcase;
	int flag;
	int M, N, x, y, temp;
	int i, max, min;
	long total;
	scanf("%d", &testcase);

	while(testcase--){
		scanf("%d %d %d %d", &M, &N, &x, &y);
		flag = 1;
		if(M>N){
			max = M;
			min = N;
		}
		else{
			max = N;
			min = M;
		}
		temp = 1;
		for(i=2; i<=min; i++){
			if(max % i == 0 && min % i == 0)
				temp = i;
		}
		total = max * min / temp;

		i = x;
		while(i<=total){
			if(i % N == 0 && N == y){
				printf("%d\n", i);
				flag = 0;
				break;
			}
			else if(i % N == y){
				printf("%d\n", i);
				flag = 0;
				break;
			}
			i = i + M;
		}

		if(flag == 1)
			printf("-1\n");
	}

	return 0;
}