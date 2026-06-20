#include <bits/stdc++.h>
using namespace std;

int main()
{
    int Q;
    string S;
    cin >> Q >> S;

    string original = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    string key = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";

    unordered_map<char, char> mp;

    if (Q == 1)
    {
        for (int i = 0; i < original.size(); ++i)
        {
            mp[original[i]] = key[i];
        }
    }
    else
    {

        for (int i = 0; i < key.size(); ++i)
        {
            mp[key[i]] = original[i];
        }
    }

    for (char c : S)
    {
        cout << mp[c];
    }
    cout << endl;

    return 0;
}
