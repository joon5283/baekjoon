#include <stdio.h>	

int main(){

	int testcase;
	scanf_s("%d", &testcase);

	int loop=0, a, b;
	int temp[10];
	int index, i, j, prod, flag;

	for(loop = 0; loop < testcase; loop++){
		scanf_s("%d %d", &a, &b);
		index = 0;
		for(i=0; i<10; i++)
			temp[i] = -1;
		prod = 1;
		while(1){
			flag = 0;
			prod = prod * a;
			prod = prod % 10;
			for(j=0; j<10; j++){
				if(temp[j] == prod){
					flag = 1;
					break;
				}
			}
			if(flag == 1)
				break;
			else{
				temp[index] = prod;
				index++;
			}
		}
		if(b%index != 0){
			if(temp[(b%index)-1] == 0)
				printf("10\n");
			else
				printf("%d\n", temp[(b%index)-1]);
		}
		else if(b == 0)
			printf("1\n");
		else{
			if(temp[index-1] == 0)
				printf("10\n");
			else
				printf("%d\n", temp[index-1]);
		}
	}

	return 0;
}