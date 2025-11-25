#include <stdio.h>

int main()
{
    int num, sum = 0, rem;
    scanf("%d", &num);

    int temp = num;

    while (num > 0)
    {
        rem = num % 10;
        sum = sum * 10 + rem;
        num = num / 10;
    }

    printf("%d\n", sum);

    if (temp == sum)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
