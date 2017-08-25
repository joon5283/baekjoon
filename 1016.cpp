#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
	long long int min, max, count, i;
	long long int<vector> list;
	cin>>min>>max;
	count = max - min + 1;
	i = 2;

	while(1){
		if(min <= i*i && max >= i*i)
			list.push_back(i*i);
		if(i*i > max)
			break;
		i++;
	}

	cout<<count<<endl;

	return 0;
}
