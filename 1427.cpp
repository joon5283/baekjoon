#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;

int main(){

	long long int temp;
	vector<int> number;
	int i;
	cin>>temp;

	while(temp != 0){
		number.push_back(temp%10);
		temp = temp / 10;
	}

	sort(number.begin(), number.end());

	for(i = number.size() - 1; i>=0; i--)
		printf("%d", number[i]);
	printf("\n");
	return 0;
}