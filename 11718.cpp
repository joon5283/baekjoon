#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(){
	char input[101] = " ";

	while(1){
		gets(input);
		if(strlen(input) == 0)
			return 0;
		if(strlen(input) <= 100)
			printf("%s\n", input);
	}
	return 0;
}