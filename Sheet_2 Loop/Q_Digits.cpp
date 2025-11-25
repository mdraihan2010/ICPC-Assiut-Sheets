#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int num;
        scanf("%d", &num);

        if (num == 0)
        {
            printf("0\n");
            continue;
        }

        while (num > 0)
        {
            int digit = num % 10;
            printf("%d ", digit);
            num /= 10;
        }

        printf("\n");
    }

    return 0;
}
