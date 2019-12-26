#include<stdio.h>

int main()
{
    int max, idx, i, cur;
    max=0;

    for (i=0; i<9; i++)
    {
        scanf("%d", &cur);
        if (cur > max)
        {
            max = cur;
            idx = i+1;
        }
    }

    printf("%d\n%d\n", max, idx);

    return 0;
}
