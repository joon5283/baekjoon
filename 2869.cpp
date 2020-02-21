#include <cstdio>

using namespace std;

int main()
{
    int A, B, V;
    int diff, goal, ans;

    scanf("%d %d %d", &A, &B, &V);

    diff = A - B;
    goal = V - A;

    ans = goal / diff;

    if (goal % diff != 0)
        ans++;
    ans++;

    printf("%d\n", ans);

    return 0;
}
