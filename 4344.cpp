#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
	int testcase, number, i, sum, count;
	float score[1000];
	float avg, temp;

	scanf("%d", &testcase);

	while(testcase--){
		scanf("%d", &number);
		sum = 0;	count = 0;
		for(i=0; i<number; i++){
			scanf("%f", &score[i]);
			sum += score[i];
		}
		avg = sum / number;

		for(i=0; i<number; i++){
			if(avg < score[i])
				count++;
		}
		temp = (float)count * 100 / (float)number;
		printf("%.3f%%\n", temp);
	}

	return 0;
}