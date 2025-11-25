#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int A[200000], B[200000];

    for (int i = 0; i < n; i++)
        scanf("%d", &A[i]);
    for (int i = 0; i < n; i++)
        scanf("%d", &B[i]);

    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (A[j] > A[j + 1])
            {
                int t = A[j];
                A[j] = A[j + 1];
                A[j + 1] = t;
            }

    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (B[j] > B[j + 1])
            {
                int t = B[j];
                B[j] = B[j + 1];
                B[j + 1] = t;
            }

    int same = 1;
    for (int i = 0; i < n; i++)
    {
        if (A[i] != B[i])
        {
            same = 0;
            break;
        }
    }

    if (same)
        printf("yes\n");
    else
        printf("no\n");

    return 0;
}
