#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(){
	int count = 1;
	long long unsigned int roomnum, check, sum;

	scanf("%llu", &roomnum);

	if(roomnum == 1){
		printf("%d\n", count);
		return 0;
	}
	else{
		sum = 1; check = 6;
		while(roomnum > sum){
			sum += check;
			check += 6;
			count++;
		}
	}
	printf("%d\n", count);
	return 0;
}