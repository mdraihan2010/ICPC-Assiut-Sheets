#include <stdio.h>

int main()
{
    int n, t;
    scanf("%d %d", &n, &t);

    int freq[1000001] = {0};

    for (int i = 0; i < n; i++)
    {
        int num;
        scanf("%d", &num);
        freq[num] = 1;
    }

    while (t--)
    {
        int x;
        scanf("%d", &x);

        if (freq[x])
            printf("found\n");
        else
            printf("not found\n");
    }

    return 0;
}
