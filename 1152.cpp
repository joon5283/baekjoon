#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define length 1000002

int main(){
	char a[length] = {NULL};
	int i, count = 0;

	gets(a);

	for(i=0; i<strlen(a)-1; i++){
		if(strncmp(a+i, " ", 1) != 0 && ((strncmp(a+i+1, " ", 1) == 0 || strncmp(a+i+1, "\0", 1) == 0))){
			count++;
		}
	}
	if(strncmp(a+strlen(a), "\0", 1) == 0 && strncmp(a+strlen(a)-1, " ", 1) == 0){
		printf("%d\n", count);
	}
	else
		printf("%d\n", count+1);
	return 0;
}