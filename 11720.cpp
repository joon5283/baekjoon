#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(){

	int count, temp, total = 0;
	char number;

	scanf("%d\n", &count);
	while(count>0){
		scanf("%c", &number);
		//temp = atoi(&number);
		//total += temp;
		total += number - '0';
		count--;
	}
	printf("%d\n", total);
	return 0;
}