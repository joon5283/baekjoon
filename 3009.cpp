#include <cstdio>

using namespace std;

int main()
{
    int x1, x2, x3, y1, y2, y3;
    int x, y;

    scanf("%d %d", &x1, &y1);
    scanf("%d %d", &x2, &y2);
    scanf("%d %d", &x3, &y3);

    if (x1 == x2)
        x = x3;
    else if (x2 == x3)
        x = x1;
    else if (x1 == x3)
        x = x2;

    if (y1 == y2)
        y = y3;
    else if (y2 == y3)
        y = y1;
    else if (y1 == y3)
        y = y2;

    printf("%d %d\n", x, y);

    return 0;
}
