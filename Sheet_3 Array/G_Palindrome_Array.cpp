#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n], v[n];

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (int i = 0; i < n; i++)
        v[i] = arr[i];

    for (int i = 0, j = n - 1; i < j; i++, j--)
    {
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
    }

    int count = 0;
    for (int i = 0; i < n; i++)
        if (arr[i] == v[i])
            count++;

    if (count == n)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
