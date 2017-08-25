#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int count1 = 0;

int main(){
	int tc;
	double start_x, start_y, end_x, end_y;
	cin >> tc;
	

	for(int i = 1; i <= tc; i++){
		int loop;
		count1 = 0;
		cin >> start_x >> start_y >> end_x >> end_y;
		cin>>loop;

		double x, y, r, dist1, dist2;
		for(int j=1; j<=loop; j++){
			cin >> x >> y >> r;
			dist1 = sqrt(pow(x-start_x,2) + pow(y-start_y,2));
			dist2 = sqrt(pow(x-end_x,2) + pow(y-end_y,2));
			if(dist1 < r && dist2 > r){
				count1++;
			}
			else if(dist1 > r && dist2 < r){
				count1++;
			}
		}
		cout<<count1<<endl;	
	}
	return 0;
}

