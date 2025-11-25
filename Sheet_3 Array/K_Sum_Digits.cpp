#include <stdio.h>

int main()
{
    int n;
    char digits[1000001];
    scanf("%d %s", &n, digits);

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += digits[i] - '0';
    }

    printf("%d\n", sum);
    return 0;
}
