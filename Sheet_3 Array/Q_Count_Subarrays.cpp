#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);

        int v[200000];
        for (int i = 0; i < n; i++)
            scanf("%d", &v[i]);

        long long count = 0;
        int len = 1;

        for (int i = 1; i < n; i++)
        {
            if (v[i] >= v[i - 1])
                len++;
            else
            {
                count += (long long)len * (len + 1) / 2;
                len = 1;
            }
        }

        count += (long long)len * (len + 1) / 2;

        printf("%lld\n", count);
    }

    return 0;
}
