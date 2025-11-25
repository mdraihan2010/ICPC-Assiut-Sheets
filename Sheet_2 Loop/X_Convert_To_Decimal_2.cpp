#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        unsigned int num;
        scanf("%u", &num);

        int count_ones = 0;
        while (num > 0)
        {
            if (num % 2 == 1)
            {
                count_ones++;
            }
            num /= 2;
        }
        int result = 0;
        for (int i = 0; i < count_ones; i++)
        {
            result = result * 2 + 1;
        }
        printf("%d\n", result);
    }

    return 0;
}
