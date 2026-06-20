#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S;
    cin >> S;

    int balance = 0, start = 0;
    vector<string> result;

    for (int i = 0; i < S.length(); ++i)
    {
        if (S[i] == 'R')
            balance++;
        else if (S[i] == 'L')
            balance--;

        if (balance == 0)
        {
            result.push_back(S.substr(start, i - start + 1));
            start = i + 1;
        }
    }
    cout << result.size() << endl;
    for (const string &s : result)
    {
        cout << s << endl;
    }

    return 0;
}
