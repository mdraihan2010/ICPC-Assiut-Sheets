#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        long long fact = 1;
        scanf("%d", &n);

        for (int i = 1; i <= n; i++)
        {
            fact *= i;
        }

        printf("%lld\n", fact);
    }

    return 0;
}
