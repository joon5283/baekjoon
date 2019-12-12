#include <stdio.h>

int main()
{
    int times, a, b, i;

    scanf("%d", &times);

    for (i=0; i<times; i++)
    {
        scanf("%d %d", &a, &b);
        printf("%d\n", a+b);
    }
    return 0;
}
