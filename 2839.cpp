#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
	int sum, remainder;
	int count, i, temp, flag;

	scanf("%d", &sum);

	temp = sum / 5;
	remainder = sum % 5;
	count = 0;
	flag = 0;
	if(remainder == 0){
		printf("%d\n", temp);
		return 0;
	}
	else{
		for(i=0; i<4; i++){
			if(temp > 0 && flag == 1)
				temp--;
			if(remainder % 3 == 0){
				printf("%d\n", temp + remainder/3);
				return 0;
			}
			remainder = remainder + 5;
			
			if(temp <= 0){
				printf("-1\n");
				return 0;
			}
			flag = 1;
		}
	}
	printf("-1\n");
	return 0;
}