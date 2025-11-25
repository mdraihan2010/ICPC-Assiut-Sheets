#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    int a[200000], b[200000];

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (int i = 0; i < m; i++)
        scanf("%d", &b[i]);

    int j = 0;
    for (int i = 0; i < n && j < m; i++)
        if (a[i] == b[j])
            j++;

    if (j == m)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
