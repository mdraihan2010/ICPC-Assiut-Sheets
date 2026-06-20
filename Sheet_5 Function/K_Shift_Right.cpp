#include <iostream>
using namespace std;

void rightShift(int arr[], int n, int x)
{
    x = x % n;
    int temp[10000];

    for (int i = 0; i < n; ++i)
    {
        temp[(i + x) % n] = arr[i];
    }
    for (int i = 0; i < n; ++i)
    {
        cout << temp[i] << " ";
    }
    cout << endl;
}

int main()
{
    int N, X;
    cin >> N >> X;

    int A[10000];
    for (int i = 0; i < N; ++i)
    {
        cin >> A[i];
    }

    rightShift(A, N, X);

    return 0;
}
