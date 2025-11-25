#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    int current = 1;

    for (int i = 0; i < N; i++)
    {

        for (int j = 0; j < 3; j++)
        {
            printf("%d ", current);
            current++;
        }

        printf("PUM\n");

        current++;
    }

    return 0;
}
