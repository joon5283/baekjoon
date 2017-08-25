#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(){
	int count = 0, i, len;
	char input[101];

	scanf("%s", input);

	len = strlen(input);
	i = 0;

	while(i < len){
		if(strncmp("c=", input+i, 2) == 0){
			i = i + 2;
			count++;
		}
		else if(strncmp("c-", input+i, 2) == 0){
			i = i + 2;
			count++;
		}
		else if(strncmp("lj", input+i, 2) == 0){
			i = i + 2;
			count++;
		}
		else if(strncmp("nj", input+i, 2) == 0){
			i = i + 2;
			count++;
		}
		else if(strncmp("s=", input+i, 2) == 0){
			i = i + 2;
			count++;
		}
		else if(strncmp("z=", input+i, 2) == 0){
			i = i + 2;
			count++;
		}
		else if(strncmp("dz=", input+i, 3) == 0){
				i = i + 3;
				count++;
		}
		else if(strncmp("d-", input+i, 2) == 0){
				i = i + 2;
				count++;
		}
		else{
			i++; count++;
		}
	}
	printf("%d\n", count);
	return 0;
}