#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    int arr[1000];

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < m; j++)
            scanf("%d", &arr[j]);

        for (int j = m - 1; j >= 0; j--)
            printf("%d ", arr[j]);

        printf("\n");
    }

    return 0;
}
