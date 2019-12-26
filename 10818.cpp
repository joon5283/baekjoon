#include<stdio.h>

int main()
{
    int max, min, N;
    int cur, i;

    max=-1000000;
    min=1000000;

    scanf("%d", &N);

    for(i=0; i<N; i++)
    {
        scanf("%d", &cur);
        if (cur > max)
            max = cur;
        if (cur < min)
            min = cur;
    }

    printf("%d %d\n", min, max);
    return 0;
}
