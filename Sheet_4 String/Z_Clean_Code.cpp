#include <bits/stdc++.h>
using namespace std;

int main()
{
    string line;
    string full_source = "";

    while (getline(cin, line))
    {
        full_source += line + "\n";
    }

    string cleaned = "";
    int n = full_source.size();
    bool in_block_comment = false;

    for (int i = 0; i < n; i++)
    {
        if (!in_block_comment && i + 1 < n && full_source[i] == '/' && full_source[i + 1] == '/')
        {
           
            while (i < n && full_source[i] != '\n')
            {
                i++;
            }
            cleaned += full_source[i]; 
            continue;
        }
        if (!in_block_comment && i + 1 < n && full_source[i] == '/' && full_source[i + 1] == '*')
        {
            in_block_comment = true;
            i++;
            continue;
        }
        if (in_block_comment && i + 1 < n && full_source[i] == '*' && full_source[i + 1] == '/')
        {
            in_block_comment = false;
            i++;
            continue;
        }

        if (!in_block_comment)
        {
            cleaned += full_source[i];
        }
    }
    stringstream ss(cleaned);
    string current_line;

    while (getline(ss, current_line))
    {
        bool has_code = false;
        for (char c : current_line)
        {
            if (!isspace(c))
            {
                has_code = true;
                break;
            }
        }
        if (has_code)
        {
            cout << current_line << endl;
        }
    }

    return 0;
}