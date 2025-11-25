#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    char a[1000][1000];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            scanf(" %c", &a[i][j]);

    int x, y;
    scanf("%d %d", &x, &y);
    x--;
    y--;

    int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
    int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

    for (int k = 0; k < 8; k++)
    {
        int i = x + dx[k];
        int j = y + dy[k];
        if (i >= 0 && i < n && j >= 0 && j < m && a[i][j] != 'x')
        {
            printf("no\n");
            return 0;
        }
    }

    printf("yes\n");
    return 0;
}
