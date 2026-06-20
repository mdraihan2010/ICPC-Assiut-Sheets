#include <iostream>
using namespace std;

void printChars(int N, char C)
{
    for (int i = 0; i < N; ++i)
    {
        cout << C;
        if (i < N - 1)
            cout << " ";
    }
    cout << endl;
}

int main()
{
    int T;
    cin >> T;

    for (int i = 0; i < T; ++i)
    {
        int N;
        char C;
        cin >> N >> C;
        printChars(N, C);
    }

    return 0;
}
