#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    vector<int> freq(26); 

    for (int i = 0; i < s.size(); i++)
    {
        char c = tolower(s[i]);  
        if (c >= 'a' && c <= 'z') 
            freq[c - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] > 0)
        {
            cout << char('a' + i) << " : " << freq[i] << endl;
        }
    }

    return 0;
}
