#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
using namespace std;

void printstar(int row, int col, int count);
char **star;
int k;

int main(){
	
	int input, count, i, j;

	cin >> input;
	count = input / 3;
	for(i=0; ; ){
		if(pow(count, i) == input){
			k = i;
			break;
		}
	}

	star = (char **)malloc(sizeof(char *) * input);
	for(i=0; i<input; i++)
		star[i] = (char *)malloc(sizeof(char) * 2 * input);

	for(i=0; i<input; i++){
		for(j=0; j<input*2; j++){
			star[i][j] = ' ';
		}
	}

	printstar(0, input-1, 1);
	
	for(i=0; i<input; i++)
		printf("%s\n", star[i]);

	return 0;
}

void printstar(int row, int col, int count){

	if(count == k+2)
		return ;

	if(count % 2 == 0){
		star[row][col] = '*';
		star[row+1][col-1] = '*';
		star[row+1][col+1] = '*';
		star[row+2][col-2] = '*';
		star[row+2][col-1] = '*';
		star[row+2][col] = '*';
		star[row+2][col+1] = '*';
		star[row+2][col+2] = '*';

	}
	else{
		star[row][col] = '*';
		star[row+1][col-1] = '*';
		star[row+1][col+1] = '*';
		star[row+2][col-2] = '*';
		star[row+2][col-1] = '*';
		star[row+2][col] = '*';
		star[row+2][col+1] = '*';
		star[row+2][col+2] = '*';
		printstar(row+3, col-3, count+1);
		printstar(row+3, col+3, count+1);
	}


	return 0;
}