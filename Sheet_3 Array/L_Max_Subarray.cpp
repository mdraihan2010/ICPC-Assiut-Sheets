#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int A[100000];
        for (int i = 0; i < n; i++)
            scanf("%d", &A[i]);

        for (int i = 0; i < n; i++)
        {
            int mx = A[i];
            for (int j = i; j < n; j++)
            {
                if (A[j] > mx)
                    mx = A[j];
                printf("%d ", mx);
            }
        }
        printf("\n");
    }
    return 0;
}
