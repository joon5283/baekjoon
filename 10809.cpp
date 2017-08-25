#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(){

	char input[102];
	int number[26];
	int i, temp;
	
	for(i=0; i<26; i++)
		number[i] = -1;
	
	scanf("%s", input);

	for(i=0; i<strlen(input); i++){
		temp = int(input[i]) - 97;
		if(number[temp] == -1)
			number[temp] = i;
	}

	for(i=0; i<25; i++){
		printf("%d ", number[i]);
	}
	printf("%d\n", number[25]);
	return 0;
}