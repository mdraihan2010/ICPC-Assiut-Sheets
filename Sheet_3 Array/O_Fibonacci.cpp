#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    if (n == 1)
    {
        printf("0\n");
        return 0;
    }
    if (n == 2)
    {
        printf("1\n");
        return 0;
    }

    long long a = 0, b = 1, fib = 0;

    for (int i = 3; i <= n; i++)
    {
        fib = a + b;
        a = b;
        b = fib;
    }

    printf("%lld\n", fib);
    return 0;
}
