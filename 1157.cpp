#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(){

	char input[1000002];
	int len, temp, i, max1, max2, index1, index2;
	int repeat[26] = {0, };

	scanf("%s", input);
	max1 = 0; max2 = 0;
	index1 = 0; index2 = 0;
	len = strlen(input);
	for(i=0; i<len; i++){
		if(input[i] >= 'a' && input[i] <= 'z'){
			temp = (int)input[i] - 97;
			repeat[temp]++;
		}
		else{
			temp = (int)input[i] - 65;
			repeat[temp]++;
		}
		if(repeat[temp] > max1){
			max2 = max1;
			max1 = repeat[temp];
			index2 = temp;
			index1 = temp;
		}
		else if(repeat[temp] > max2){
			max2 = repeat[temp];
			index2 = temp;
		}
	}
	if(max1 == max2){
		printf("?\n");
	}
	else{
		printf("%c\n", index1 + 65);
	}

	return 0;
}