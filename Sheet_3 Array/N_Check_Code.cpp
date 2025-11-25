#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    char s[200005];
    scanf("%s", s);

    int len = a + b + 1;

    if (strlen(s) != len || s[a] != '-')
    {
        printf("No\n");
        return 0;
    }

    for (int i = 0; i < len; i++)
    {
        if (i == a)
            continue;
        if (!isdigit(s[i]))
        {
            printf("No\n");
            return 0;
        }
    }

    printf("Yes\n");
    return 0;
}
