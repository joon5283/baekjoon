#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
    int rad;
    double area1, area2;
    double PI = acos(-1);

    scanf("%d", &rad);

    area1 = PI * rad * rad;
    printf("%.6f\n", area1);

    area2 = 2 * rad * rad;
    printf("%.6f\n", area2);
    return 0;
}
