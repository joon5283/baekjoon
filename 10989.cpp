#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
	ios::sync_with_stdio(false);

	long temp;
	int size, i, j;
	bool check[10001];
	int count[10001];

	for(j=0; j<=10000; j++){
		check[j] = false;
		count[j] = 0;
	}

	vector<long> number;

	cin>>size;

	for(i=0; i<size; i++){
		cin>>temp;
		if(check[temp] == false){
			number.push_back(temp);
			check[temp] = true;
			count[temp]++;
		}
		else{
			count[temp]++;
		}
	}

	sort(number.begin(), number.end());

	for(i=0; i<10001; i++){
		for(j=0; j<count[i]; j++){
			printf("%d\n", i);
		}
	}

	return 0;
}