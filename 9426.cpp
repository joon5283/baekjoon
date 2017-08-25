#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <queue>
#include <list>
using namespace std;

int main(){
	int N, K;
	int i, j, l, total;
	long long int temp, sum;
	list<int> number;
	vector<int> count;
	cin >> N >> K;
	total = 0;
	sum = 0;
	for(i=0; i<N; i++){
		cin >> temp;
		number.push_back(temp);
		total++;
		if(total == K){
			sort(number.begin(), number.end());
			if(K % 2 == 0){
				sum += number[(K/2)-1];
			}
			else{
				sum += number[(K)/2];
			}
			total--;
		}
	}

	printf("%lld\n", sum);

	return 0;
}