#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
	int input, temp, count;
	int first, second, sum;
	scanf("%d", &input);
	count = 0;
	temp = input;

	while(1){
		if(temp / 10 == 0){
			temp = (temp % 10) * 10 + temp;
		}
		else{
			first = temp / 10;
			second = temp % 10;
			sum = first + second;
			temp = second * 10 + sum % 10;
		}
		
		if(temp == input)
			break;
		else
			count++;
	}
	printf("%d\n", count+1);
	return 0;
}