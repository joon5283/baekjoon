#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
	int month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	char day[7][4] = {"MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"};

	int m, d, i, total = 0;

	scanf("%d %d", &m, &d);

	for(i=0; i<m-1; i++)
		total += month[i];
	total += d;

	total = total % 7;

	if (total == 0)
		printf("%s\n", day[6]);	
	else
		printf("%s\n", day[total-1]);

	return 0;
}