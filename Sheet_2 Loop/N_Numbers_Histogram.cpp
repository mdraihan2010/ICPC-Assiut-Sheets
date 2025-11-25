#include <stdio.h>

int main()
{
    char S;
    int N;

    scanf(" %c %d", &S, &N); 

    for (int i = 0; i < N; i++)
    {
        int X;
        scanf("%d", &X);

        for (int j = 0; j < X; j++)
        {
            printf("%c", S);
        }

        printf("\n");
    }

    return 0;
}
