#include <bits/stdc++.h>
using namespace std;

long long power(int x, int y)
{
    long long result = 1;
    for (int i = 0; i < y; ++i)
    {
        result *= x;
    }
    return result;
}
long long computeSum(int X, int N)
{
    long long S = 0;
    for (int i = 0; i <= N; i += 2)
    {
        S += power(X, i);
    }
    S -= 1; 
    return S;
}

int main()
{
    int X, N;
    cin >> X >> N;
    cout << computeSum(X, N) << endl;
    return 0;
}
