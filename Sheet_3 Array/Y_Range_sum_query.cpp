#include <stdio.h>

int main()
{
    int n, t;
    scanf("%d %d", &n, &t);

    long long A[200000], prefix[200000];

    prefix[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        scanf("%lld", &A[i]);
        prefix[i] = prefix[i - 1] + A[i];
    }

    while (t--)
    {
        int L, R;
        scanf("%d %d", &L, &R);
        printf("%lld\n", prefix[R] - prefix[L - 1]);
    }

    return 0;
}
