#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[200000];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    int ans = 0;

    while (1)
    {
        for (int i = 0; i < n; i++)
        {
            if (a[i] % 2 != 0)
            {
                printf("%d\n", ans);
                return 0;
            }
        }

        for (int i = 0; i < n; i++)
            a[i] /= 2;

        ans++;
    }

    return 0;
}
