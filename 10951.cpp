#include<stdio.h>

int main()
{
    int a, b;

    while(1)
    {
        if(scanf("%d %d", &a, &b) == EOF)
            return 0;

        printf("%d\n", a + b);

    }
    return 0;
}
