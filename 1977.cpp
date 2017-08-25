#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
#include <stdio.h>


int main(){
	int M, N, temp, i, flag;
	long long sum, min;

	scanf("%d", &M);
	scanf("%d", &N);

	sum = 0; flag = 0; i = 0;

	while(i * i <= N){
		if(i * i >= M){
			if(flag == 0){
				flag = 1;
				min = i * i;
			}
			sum += i * i;
		}
		i++;
	}
	if(flag == 0){
		printf("-1\n");
	}
	else{
		printf("%lld\n", sum);
		printf("%d\n", min);
	}
	return 0;
}