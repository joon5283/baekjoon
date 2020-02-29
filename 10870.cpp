#include <cstdio>

using namespace std;

int Fibo(int n, int* ary);

int main()
{
    int ary[21];
    int num;

    for (int i = 0; i < 21; i++)
        ary[i] = -1;

    ary[0] = 0;
    ary[1] = 1;
    scanf("%d", &num);

    printf("%d\n", Fibo(num, ary));

    return 0;
}

int Fibo(int n, int* ary)
{
    if(ary[n] != -1)
        return ary[n];

    ary[n] = Fibo(n-1, ary) + Fibo(n-2, ary);

    return ary[n];
}
