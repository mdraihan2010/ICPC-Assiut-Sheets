#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[n]; 
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int target_value;
    scanf("%d", &target_value);

    int position = -1; 
    for (int i = 0; i < n; i++)
    {
        if (a[i] == target_value)
        {
            position = i;
            break;
        }
    }
    printf("%d\n", position);

    return 0;
}
