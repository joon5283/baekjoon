#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(){
	int len, i, total = 0;
	char input[17];

	scanf("%s", input);
	len = strlen(input);
	total += len;
	for(i=0; i<len; i++){
		if(input[i] >= 'A' && input[i] <= 'C'){
			total += 2;
		}
		else if(input[i] >= 'D' && input[i] <= 'F'){
			total += 3;
		}
		else if(input[i] >= 'G' && input[i] <= 'I'){
			total += 4;
		}
		else if(input[i] >= 'J' && input[i] <= 'L'){
			total += 5;
		}
		else if(input[i] >= 'M' && input[i] <= 'O'){
			total += 6;
		}
		else if(input[i] >= 'P' && input[i] <= 'S'){
			total += 7;
		}
		else if(input[i] >= 'T' && input[i] <= 'V'){
			total += 8;
		}
		else if(input[i] >= 'W' && input[i] <= 'Z'){
			total += 9;
		}
	}
	printf("%d\n", total);

	return 0;
}