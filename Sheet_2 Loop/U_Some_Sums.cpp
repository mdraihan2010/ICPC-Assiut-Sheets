#include <stdio.h>

int main()
{
    int N, A, B;
    scanf("%d %d %d", &N, &A, &B);

    int total = 0;

    for (int i = 1; i <= N; i++)
    {
        int num = i;
        int sum = 0;

        while (num > 0)
        {
            sum += num % 10;
            num /= 10;
        }

        if (sum >= A && sum <= B)
        {
            total += i;
        }
    }

    printf("%d\n", total);

    return 0;
}
