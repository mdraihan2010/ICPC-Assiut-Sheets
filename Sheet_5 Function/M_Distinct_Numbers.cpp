#include <bits/stdc++.h>
using namespace std;

int countDistinct(int arr[], int n)
{
    set<int> unique;
    for (int i = 0; i < n; ++i)
    {
        unique.insert(arr[i]);
    }
    return unique.size();
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

    int result = countDistinct(A, N);
    cout << result << endl;

    return 0;
}
