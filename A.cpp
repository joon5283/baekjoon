#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

int main(){
	int i=1;
	int count;
	char str[15][30];
	char str1[30];
	while(1){
		scanf_s("%d", &count);
		
		int j = 1;
		for(j=0; j<=count; j++){
			gets_s(str[j]);
		}
		if(count == 0)
			return 0;
		cout<<"SET "<<i<<"\n";
		i++;
		for(j=1; j<=count; j+=2){
			cout<<str[j]<<"\n";
		}
		if(count % 2 == 0)
		{
			for(j=count; j>0; j-=2){
				cout<<str[j]<<"\n";
			}
		}
		else{
			for(j=count-1; j>0; j-=2){
				cout<<str[j]<<"\n";
			}
		}
	}
	return 0;
}