#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
using namespace std;

int main()
{
    int A, B, C;
    int num;

    scanf("%d %d %d", &A, &B, &C);

    if (B >= C)
    {
        printf("-1\n");
        return 0;
    }

    num = A / (C-B);
    num++;

    printf("%d\n", num);

    return 0;
}
