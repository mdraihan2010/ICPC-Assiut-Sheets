#include <bits/stdc++.h>
using namespace std;
double calculateAverage(const vector<double> &arr)
{
    double sum = 0;
    for (double num : arr)
    {
        sum += num;
    }
    return sum / arr.size();
}

int main()
{
    int N;
    cin >> N;

    vector<double> A(N);
    for (int i = 0; i < N; ++i)
    {
        cin >> A[i];
    }

    double average = calculateAverage(A);
    cout << fixed << setprecision(7) << average << endl;

    return 0;
}
