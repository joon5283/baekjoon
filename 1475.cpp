#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(){

	char N[9];
	int res;
	int number[10] = {0, 0, };
	int index[10];
	int i, j, temp;

	scanf("%s", N);

	if(strlen(N) == 1){
		printf("1\n");
		return 0;
	}
	else{
		for(i=0; i<strlen(N); i++){
			res = N[i] - 48;
			if(res == 9)
				res = 6;
			number[res]++;
		}
	}

	for(i=0; i<9; i++)
		index[i] = i;
	
	for(i=0; i<8; i++){
		for(j=0; j<8; j++){
			if(number[j] < number[j+1]){
				temp = number[j+1];
				number[j+1] = number[j];
				number[j] = temp;

				temp = index[j+1];
				index[j+1] = index[j];
				index[j] = temp;
			}
		}
	}

	if(index[0] == 6){
		if(number[0] % 2 != 0)
			number[0]++;
		if(number[0] / 2 > number[1])
			printf("%d\n", number[0]/2);
		else
			printf("%d\n", number[1]);
	}
	else{
		printf("%d\n", number[0]);
	}

	return 0;
}