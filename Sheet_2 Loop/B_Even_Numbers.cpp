#include <stdio.h>
int main(void)
{
    int n;
    int counter = 0;
    scanf("%d", &n);
    for (int i = 2; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d\n", i);
            counter = 1;
        }
    }

    if (counter == 0)
    {
        printf("-1");
    }

    return (0);
}