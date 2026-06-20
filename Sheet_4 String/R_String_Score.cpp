#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    string S;
    cin >> S;

    long long score = 0;
    int i = 0;

    while (i < S.size())
    {
        char ch = S[i];

        if (ch == 'V')
        {
            score += 5;
            i++;
        }
        else if (ch == 'W')
        {
            score += 2;
            i++;
        }
        else if (ch == 'X')
        {
            if (i + 1 < S.size())
            {
                S.erase(i + 1, 1); 
            }
            i++;
        }
        else if (ch == 'Y')
        {
            if (i + 1 < S.size())
            {
                char nextChar = S[i + 1];
                S.erase(i + 1, 1);    
                S.push_back(nextChar);
            }
            i++;
        }
        else if (ch == 'Z')
        {
            if (i + 1 < S.size())
            {
                char nextChar = S[i + 1];
                if (nextChar == 'V')
                {
                    score /= 5;
                    S.erase(i + 1, 1);
                }
                else if (nextChar == 'W')
                {
                    score /= 2;
                    S.erase(i + 1, 1);
                }
            }
            i++;
        }
        else
        {
            i++;
        }
    }

    cout << score << endl;
    return 0;
}
