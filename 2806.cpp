#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
	char *input;
	int len, flag, count=0;
	char temp;

	scanf_s("%d", &len);

	input = (char *)malloc(sizeof(char) * (len + 2));
	
	scanf("%s", input);
	//printf("%c\n", input[len-1]);
	temp = 'A'; flag = 0;

	if(input[len-1] == 'B'/* && input[len-2] == 'A'*/){
		count++;
	}
	
	while(len!=1){
		if(input[len-1] == 'A' && input[len-2] == 'B'){
			count++;
		}
		else if(input[len-1] == 'B' && input[len-2] == 'A'){
			count++;
		}
		len--;
	}
	printf("%d\n", count);
	return 0;
}