#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[100000];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int minIndex = 0, maxIndex = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < arr[minIndex])
            minIndex = i;
        if (arr[i] > arr[maxIndex])
            maxIndex = i;
    }

    int temp = arr[minIndex];
    arr[minIndex] = arr[maxIndex];
    arr[maxIndex] = temp;

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\n");
    return 0;
}
