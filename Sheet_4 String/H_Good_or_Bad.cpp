#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int len = s.size();
        int flag = 0;
        for (int i = 0; i < len - 2; i++)
        {
            if ((s[i] == '0' && s[i + 1] == '1' && s[i + 2] == '0') ||
                (s[i] == '1' && s[i + 1] == '0' && s[i + 2] == '1'))
            {
                flag = 1;
                break;
            }
        }
        if (flag)
            cout << "Good\n";
        else
            cout << "Bad\n";
    }
    return 0;
}
