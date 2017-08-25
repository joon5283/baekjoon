#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(){

	int testcase, sum, count, i;
	char text[82];
	scanf("%d", &testcase);

	while(testcase--){
		sum = 0; count = 0;
		scanf("%s", text);

		for(i=0; i<strlen(text); i++){
			if(strncmp(text+i,"O",1) == 0){
				count++;
				sum += count;
			}
			else
				count = 0;
		}
		printf("%d\n", sum);
	}

	return 0;
}