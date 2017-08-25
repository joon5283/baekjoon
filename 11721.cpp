#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){

	char input[105];
	int count = 0, index = 0;

	scanf("%s", input);

	while(input[index] != '\0'){
		printf("%c", input[index]);
		index++;
		count++;

		if(count == 10){
			printf("\n");
			count = 0;
		}
	}
	printf("\n");
	return 0;
}