#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S;
    getline(cin, S); 
    size_t pos = S.find('?');
    string query = S.substr(pos + 1);
    stringstream ss(query);
    string token;

    map<string, string> params;

    while (getline(ss, token, '&'))
    {
        size_t eq = token.find('=');
        string key = token.substr(0, eq);
        string value = token.substr(eq + 1);
        params[key] = value;
    }
    cout << "username: " << params["username"] << endl;
    cout << "pwd: " << params["pwd"] << endl;
    cout << "profile: " << params["profile"] << endl;
    cout << "role: " << params["role"] << endl;
    cout << "key: " << params["key"] << endl;

    return 0;
}
