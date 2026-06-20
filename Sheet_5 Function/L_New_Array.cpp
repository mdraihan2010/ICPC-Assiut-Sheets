#include <bits/stdc++.h>
using namespace std;

void concatenateArrays(int A[], int B[], int N)
{
    int C[2000]; 
    for (int i = 0; i < N; ++i)
    {
        C[i] = B[i];
    }
    for (int i = 0; i < N; ++i)
    {
        C[N + i] = A[i];
    }
    for (int i = 0; i < 2 * N; ++i)
    {
        cout << C[i] << " ";
    }
    cout << endl;
}

int main()
{
    int N;
    cin >> N;

    int A[1000], B[1000];

    for (int i = 0; i < N; ++i)
    {
        cin >> A[i];
    }

    for (int i = 0; i < N; ++i)
    {
        cin >> B[i];
    }

    concatenateArrays(A, B, N);

    return 0;
}
