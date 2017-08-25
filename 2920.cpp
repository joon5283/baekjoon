#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(){

	int a[8];
	int i, flag;

	for(i=0; i<8; i++)
		scanf("%d", &a[i]);

	if(a[0] == 1){
		flag = 1;
		for(i=1; i<8; i++){
			if(a[i] != i+1){
				flag = 3;
				break;
			}
		}
	}
	else if(a[0] == 8){
		flag = 2;
		for(i=1; i<8; i++){
			if(a[i] != 8-i){
				flag = 3;
				break;
			}
		}
	}
	else
		flag = 3;

	if(flag == 1)
		printf("ascending\n");
	else if(flag == 2)
		printf("descending\n");
	else if(flag == 3)
		printf("mixed\n");

	return 0;
}