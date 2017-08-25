#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(){
	int testcase, repeat;
	int i, j; 
	char input[22];

	scanf("%d", &testcase);

	while(testcase--){
		scanf("%d %s", &repeat, input);

		for(i=0; i<strlen(input); i++){
			for(j=0; j<repeat; j++)
				printf("%c", input[i]);
		}
		printf("\n");
	}
	return 0;
}