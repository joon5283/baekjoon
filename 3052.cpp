#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
using namespace std;

int main()
{
    bool check[42];
    int i, input, remain, count = 0;

    for (i=0; i<42; i++)
        check[i] = false;

    for (i=0; i<10; i++)
    {
        scanf("%d", &input);
        remain = input % 42;

        if (check[remain] == false)
        {
            count++;
            check[remain] = true;
        }
    }

    printf("%d\n", count);
    return 0;

}
