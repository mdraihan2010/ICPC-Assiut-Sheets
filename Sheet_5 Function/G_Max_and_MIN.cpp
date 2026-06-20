#include <bits/stdc++.h>
using namespace std;
void findMinMax(int arr[], int n)
{
    int minVal = arr[0];
    int maxVal = arr[0];

    for (int i = 1; i < n; ++i)
    {
        if (arr[i] < minVal)
            minVal = arr[i];
        if (arr[i] > maxVal)
            maxVal = arr[i];
    }

    cout << minVal << " " << maxVal << endl;
}

int main()
{
    int N;
    cin >> N;

    int A[1000];
    for (int i = 0; i < N; ++i)
    {
        cin >> A[i];
    }

    findMinMax(A, N);

    return 0;
}
