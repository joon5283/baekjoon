#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){

	int room[15][15];
	int i, j, n, k, testcase;

	scanf("%d", &testcase);

	while(testcase--){
		scanf("%d", &k);
		scanf("%d", &n);

		for(i=1; i<=n; i++)
			room[0][i] = i;
		for(i=0; i<=k; i++)
			room[i][0] = 0;

		for(i=1; i<=k; i++){
			for(j=1; j<=n; j++){
				room[i][j] = room[i-1][j] + room[i][j-1];
			}
		}
		printf("%d\n", room[k][n]);
	}
	return 0;
}