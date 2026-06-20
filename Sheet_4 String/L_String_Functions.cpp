#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    while (q--)
    {
        string op;
        cin >> op;
        if (op == "pop_back")
        {
            s.pop_back();
        }
        else if (op == "front")
        {
            cout << s[0] << '\n';
        }
        else if (op == "back")
        {
            cout << s[s.size() - 1] << '\n';
        }
        else if (op == "sort")
        {
            int l, r;
            cin >> l >> r;
            int l0 = min(l, r) - 1;
            int r0 = max(l, r) - 1;
            sort(s.begin() + l0, s.begin() + r0 + 1);
        }
        else if (op == "reverse")
        {
            int l, r;
            cin >> l >> r;
            int l0 = min(l, r) - 1;
            int r0 = max(l, r) - 1;
            reverse(s.begin() + l0, s.begin() + r0 + 1);
        }
        else if (op == "print")
        {
            int pos;
            cin >> pos;
            cout << s[pos - 1] << '\n';
        }
        else if (op == "substr")
        {
            int l, r;
            cin >> l >> r;
            int l0 = min(l, r) - 1;
            int r0 = max(l, r) - 1;
            cout << s.substr(l0, r0 - l0 + 1) << '\n';
        }
        else if (op == "push_back")
        {
            char x;
            cin >> x;
            s.push_back(x);
        }
    }
    return 0;
}
