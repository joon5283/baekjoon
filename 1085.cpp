#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
    int x, y, w, h;
    int ans_x, ans_y, ans;

    scanf("%d %d %d %d", &x, &y, &w, &h);

    ans_x = min(x, w - x);
    ans_y = min(y, h - y);

    ans = min(ans_x, ans_y);

    printf("%d\n", ans);

    return 0;
}
