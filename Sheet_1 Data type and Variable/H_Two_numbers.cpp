#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    int floor_val = a / b;

    int ceil_val = (a + b - 1) / b;

    int round_val = (a + b / 2) / b;

    printf("floor %d / %d = %d\n", a, b, floor_val);
    printf("ceil %d / %d = %d\n", a, b, ceil_val);
    printf("round %d / %d = %d\n", a, b, round_val);

    return 0;
}
