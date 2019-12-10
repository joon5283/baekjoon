#include <stdio.h>

int main()
{
    int first, sec;
    int sec_1, sec_2, sec_3;

    scanf("%d", &first);
    scanf("%d", &sec);

    sec_1 = sec % 10;
    sec_2 = (sec / 10) % 10;
    sec_3 = sec / 100;

    printf("%d\n", first*sec_1);
    printf("%d\n", first*sec_2);
    printf("%d\n", first*sec_3);
    printf("%d", first*sec);

    return 0;
}
