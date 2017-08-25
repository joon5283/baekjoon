#include <stdio.h>

int main(){
	int testcase, N, M;
	int i, j, flag;
	long long int sum;
	scanf_s("%d", &testcase);

	while(testcase--){
		scanf_s("%d %d", &N, &M);
		sum = 1;
		j = 0;
		flag = 0;
		for(i=0; i<N; i++){
			sum *= (M-i);
			while(flag == 0 && sum % (N-j) == 0){
				sum /= (N-j);
				j++;
				if(j == N){
					flag = 1;
					break;
				}
				if(sum == 1)
					break;
			}
		}
		printf("%d\n", sum);
	}
	return 0;
}