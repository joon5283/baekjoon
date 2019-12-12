#include <stdio.h>

int main()
{
    int H, M;
    int new_H, new_M;

    scanf("%d %d", &H, &M);

    new_H = H;
    new_M = M - 45;
    if (new_M < 0)
    {
        new_M = 60 + new_M;
        new_H = new_H - 1;
        if (new_H < 0)
            new_H = 24 + new_H;
    }
    printf("%d %d\n", new_H, new_M);
    return 0;
}
