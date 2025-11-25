#include <stdio.h>
#include <limits.h>

int main()
{
    int T;
    scanf("%d", &T);

    while (T--)
    {
        int n;
        scanf("%d", &n);

        int a[n];
        for (int i = 0; i < n; i++)
            scanf("%d", &a[i]);

        int minResult = INT_MAX;

        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int current = a[i] + a[j] + (j - i);
                if (current < minResult)
                    minResult = current;
            }
        }

        printf("%d\n", minResult);
    }

    return 0;
}
