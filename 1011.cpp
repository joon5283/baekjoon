#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(){

	long x, y;
	long sum, length;
	int testcase, i, count;

	scanf("%d", &testcase);

	while(testcase--){
		scanf("%ld %ld", &x, &y);
		count = 0; sum = 0; i = 1;
		length = y - x;

		while(length > sum){
			sum += i;
			count++;
			if(sum >= length)
				break;

			sum += i;
			count++;
			i++;
		}
		printf("%d\n", count);
	}
	return 0;
}
