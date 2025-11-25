#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    int a = 0, b = 1;

    for (int i = 1; i <= N; i++)
    {
        if (i == 1)
        {
            printf("%d ", a);
        }
        else if (i == 2)
        {
            printf("%d ", b);
        }
        else
        {
            int c = a + b;
            printf("%d ", c);
            a = b;
            b = c;
        }
    }

    printf("\n");
    return 0;
}
