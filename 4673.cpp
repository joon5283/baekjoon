#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void D(int n);
bool stats[10001];

int main(){
	int i;

	for(i=0; i<=10000; i++)
		stats[i] = false;

	for(i=1; i<10000; i++){
		if(stats[i] == false){
			printf("%d\n", i);
			D(i);
		}
	}


	return 0;
}

void D(int n){

	if(n>=10000)
		return;

	int a, b, c, d;
	a = n % 10;
	b = (n / 10) % 10;
	c = (n / 100) % 10;
	d = (n / 1000) % 10;

	n = a + b + c + d + n;
	if(stats[n] == true)
		return ;
	stats[n] = true;
	D(n);

	return ;
}