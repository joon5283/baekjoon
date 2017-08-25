#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(){
	char input1[4], input2[4];
	int i, flag;

	scanf("%s %s", input1, input2);

	for(i=2; i>=0; i--){
		if(input1[i] > input2[i]){
			flag = 1;
			break;
		}
		else if(input1[i] < input2[i]){
			flag = 2;
			break;
		}
		else
			continue;
	}
	if(flag == 1)
		printf("%c%c%c\n", input1[2], input1[1], input1[0]);
	else if(flag == 2)
		printf("%c%c%c\n", input2[2], input2[1], input2[0]);

	return 0;
}