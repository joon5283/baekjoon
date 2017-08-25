#include <stdio.h>
#include <iostream>
using namespace std;

long long int fibo(int number);
long long int value[46];
int main(){
	int input;
	long long int output;

	for(int i = 0; i<46; i++)
		value[i] = -1;
	
	cin >> input;

	output = fibo(input);
	printf("%lld\n", output);
	return 0;
}

long long int fibo(int number){

	long long int value1, value2;
	if(number == 1 && number == 2)
		return 1;
	if(value[number-1] != -1 && value[number-2] != -1){
		return value[number-1] + value[number-2];
	}
	else if(value[number-1] == -1 && value[number-2] != -1){
		value[number-1] = fibo(number-1);
		return value[number-1]; + value[number-2];
	}
	else if(value[number-1] != -1 && value[number-2] == -1){
		value[number-2] = fibo(number-2);
		return value[number-1] + value[number-2];
	}
	else{
		value[number-1] = fibo(number-1);
		value[number-2] = fibo(number-2);
		return value[number-1]; + value[number-2];
	}
}