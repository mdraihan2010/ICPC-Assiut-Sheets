#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    int matrix[1000][1000];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);

    int sum1 = 0, sum2 = 0;

    for (int i = 0; i < n; i++)
    {
        sum1 += matrix[i][i];
        sum2 += matrix[i][n - 1 - i];
    }

    printf("%d\n", abs(sum1 - sum2));

    return 0;
}
