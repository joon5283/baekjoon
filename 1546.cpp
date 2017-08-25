#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
	float ary[1000];
	int N, i;
	float max = 0, sum = 0;

	scanf("%d", &N);

	for(i=0; i<N; i++){
		scanf("%d", &ary[i]);
		if(ary[i] >= max)
			max = ary[i];
	}
	for(i=0; i<N; i++){
		ary[i] = ary[i] * 100 / max;
		sum += ary[i];
	}
	printf("%.2f\n", sum/N);

	return 0;
}