#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
	int i, score[5];
	int sum = 0;

	for(i=0; i<5; i++){
		scanf("%d", &score[i]);
		if(score[i] < 40){
			sum += 40;
		}
		else{
			sum += score[i];
		}
	}
	printf("%d\n", sum/5);
	return 0;
}