#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){

	long int input;
	int i = 1, sum, temp;
	int under, top;

	scanf("%d", &input);

	sum = 0;

	while(1){
		sum += i;
		i++;

		if(sum >= input)
			break;
	}
	sum = sum - i+1;
	i--;
	if(i % 2 == 0){
		temp = input - sum - 1;
		under = 1; top = i;
		printf("%d/%d\n", under+temp, top-temp);
	}
	else{
		temp = input - sum - 1;
		under = i; top = 1;
		printf("%d/%d\n", under-temp, top+temp);
	}

	return 0;
}