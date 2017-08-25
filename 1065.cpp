#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
	int input, i, count;
	int a, b, c, d;
	int res2, res3;
	count = 0;
	scanf("%d", &input);

	for(i=1; i<=input; i++){
		a = i / 1000;
		b = (i / 100) % 10;
		c = (i / 10) % 10;
		d = i % 10;

		res2 = c - b;
		res3 = d - c;

		if(i < 100)
			count++;
		else if(i >= 100 && i < 1000){
			if(res2 == res3)
				count++;
		}
		
	}
	printf("%d\n", count);
	return 0;
}