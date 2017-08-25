#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int testcase;
	int x1, x2, y1, y2, r1, r2;
	int i;
	double distance;
	cin>>testcase;
	for(i=0; i<testcase; i++){
		cin>>x1>>y1>>r1>>x2>>y2>>r2;
		distance = sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
		if(r1==r2 && x1==x2 && y1==y2){
			cout<<"-1\n";
		}
		else if(r1+r2 > distance && abs(r1-r2) < distance){
			cout<<"2\n";
		}
		else if(r1+r2 == distance || abs(r1-r2) == distance){
			cout<<"1\n";
		}
		else{
			cout<<"0\n";
		}
	}
	return 0;
}