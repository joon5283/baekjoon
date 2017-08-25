#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
	ios::sync_with_stdio(false);

	long temp;
	int size, i;
	vector<long> number;

	cin>>size;

	for(i=0; i<size; i++){
		cin>>temp;
		number.push_back(temp);
	}
	sort(number.begin(), number.end());

	for(i=0; i<size; i++)
		printf("%d\n", number[i]);

	return 0;
}