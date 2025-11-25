#include <stdio.h>

int isLucky(int num)
{
    while (num > 0)
    {
        int digit = num % 10;
        if (digit != 4 && digit != 7)
            return 0; 
        num /= 10;
    }
    return 1; 
}

int main()
{
    int A, B;
    scanf("%d %d", &A, &B);

    int found = 0;

    for (int i = A; i <= B; i++)
    {
        if (isLucky(i))
        {
            printf("%d ", i);
            found = 1;
        }
    }

    if (!found)
        printf("-1");

    printf("\n");
    return 0;
}
