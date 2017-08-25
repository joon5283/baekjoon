#include <iostream>
#include <cmath>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
#define MAX 0
int N, K;
vector< vector<int> > point;
vector<int> point1;
bool check[100001];
int time1[100001];
int max_time;
int dest, a, b;
void find_time(int start, int temp);

int main(){
	int tc, i,j;
	int temp;
	cin >> tc;
	for(j=0; j<tc; j++){
		cin>>N>>K;
		max_time = MAX; temp = 0;
		point.clear();
		for(i=1; i<=N; i++)
			cin>>time1[i];
		for(i=0; i<=N; i++){
			point.push_back(point1);
			check[i] = false;
		}
		for(i=1; i<=K; i++){
			cin>>a>>b;
			point[b].push_back(a);
			check[b] = true;
		}
		cin>>dest;
		find_time(dest, temp);
		//max_time = max_time + time1[dest];
		printf("%d\n", max_time);
	}
	return 0;
}

void find_time(int start, int temp){
	int i, j;
	int sum = temp;
	sum = temp + time1[start];
	for(i=0; i<point[start].size(); i++)
	{
		find_time(point[start][i], sum);
	}
	if(sum > max_time)
		max_time = sum;
	return ;
}