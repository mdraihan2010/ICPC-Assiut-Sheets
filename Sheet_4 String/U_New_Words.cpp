#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    if (getline(cin, s))
    {
        long long cntE = 0, cntG = 0, cntY = 0, cntP = 0, cntT = 0;

        for (char c : s)
        {
            switch (toupper(c))
            {
            case 'E':
                ++cntE;
                break;
            case 'G':
                ++cntG;
                break;
            case 'Y':
                ++cntY;
                break;
            case 'P':
                ++cntP;
                break;
            case 'T':
                ++cntT;
                break;
            }
        }

        long long ans = min({cntE, cntG, cntY, cntP, cntT});
        cout << ans << '\n';
    }
    return 0;
}
