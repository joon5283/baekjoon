#include <iostream>
#include <cmath>
using namespace std;
int fibonacci(int n);
int count_1 = 0;
int count_0 = 0;
int main(){
	int tc;
	cin>>tc;

	for(int i=1; i<=tc; i++){
		int num, result;
		cin>>num;

		result = fibonacci(num);
		printf("%d %d\n", count_0, count_1);
		count_0 = 0; count_1 = 0;
	}
	return 0;
}
int fibonacci(int n){
	if (n==0){
		count_0++;
		return 0;
	}
	else if(n==1){
		count_1++;
		return 1;
	}
	else{
		return fibonacci(n-1) + fibonacci(n-2);
	}
}