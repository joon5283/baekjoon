#include <stdio.h>

int main()
{
    int times, a, b, i;

    scanf("%d", &times);

    for (i=0; i<times; i++)
    {
        scanf("%d %d", &a, &b);
        printf("Case #%d: %d + %d = %d\n", i+1, a, b, a+b);
    }
    return 0;
}
