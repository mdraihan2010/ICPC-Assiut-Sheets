#include <stdio.h>

int main()
{
    while (1)
    { 
        int n;
        scanf("%d", &n);

        if (n == 1999)
        {
            printf("Correct\n");
            break; 
        }
        else
        {
            printf("Wrong\n");
        }
    }

    return 0;
}
