#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(){

	int testcase, len, i, temp, count = 0, flag1;
	char input[102], temp1;
	bool flag[26];

	scanf("%d", &testcase);

	while(testcase--){
		scanf("%s", input);
		len = strlen(input);
		temp1 = NULL; flag1 = 0;
		for(i=0; i<26; i++)
			flag[i] = false;

		for(i=0; i<len; i++){
			if(temp1 == NULL){
				temp1 = input[i];
				temp = (int)input[i] - 97;
				flag[temp] = true;
			}
			else{
				if(temp1 != input[i]){
					temp = (int)input[i] - 97;
					if(flag[temp] == true){
						flag1 = 1;
						break;
					}
					else{
						flag[temp] = true;
						temp1 = input[i];
						temp = (int)input[i] - 97;
						flag[temp] = true;
					}
				}
			}
		}
		if(flag1 == 0)
			count++;
	}
	printf("%d\n", count);
	return 0;
}