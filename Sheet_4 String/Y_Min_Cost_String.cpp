#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string S;
    cin >> S;
    int n = (int)S.size();

    vector<int> cost(26);
    for (int i = 0; i < 26; i++)
        cin >> cost[i];

    const long long INF = 1e15;
    vector<long long> prev_dp(26, INF), curr_dp(26, INF);
    vector<vector<int>> parent(n, vector<int>(26, -1));

    if (S[0] == '?')
    {
        for (int c = 0; c < 26; c++)
        {
            prev_dp[c] = 0;
        }
    }
    else
    {
        int c = S[0] - 'a';
        prev_dp[c] = 0;
    }
    for (int i = 1; i < n; i++)
    {
        if (S[i] == '?')
        {
            for (int c = 0; c < 26; c++)
            {
                long long best_cost = INF;
                int best_prev = -1;
                for (int p = 0; p < 26; p++)
                {
                    long long curr_cost = prev_dp[p] + abs(cost[c] - cost[p]);
                    if (curr_cost < best_cost || (curr_cost == best_cost && p < best_prev))
                    {
                        best_cost = curr_cost;
                        best_prev = p;
                    }
                }
                curr_dp[c] = best_cost;
                parent[i][c] = best_prev;
            }
        }
        else
        {
          
            int c = S[i] - 'a';
            long long best_cost = INF;
            int best_prev = -1;
            for (int p = 0; p < 26; p++)
            {
                long long curr_cost = prev_dp[p] + abs(cost[c] - cost[p]);
                if (curr_cost < best_cost || (curr_cost == best_cost && p < best_prev))
                {
                    best_cost = curr_cost;
                    best_prev = p;
                }
            }
            for (int x = 0; x < 26; x++)
                curr_dp[x] = INF;
            curr_dp[c] = best_cost;
            parent[i][c] = best_prev;
        }
        swap(prev_dp, curr_dp);
    }
    long long ans = INF;
    int last_char = -1;
    for (int c = 0; c < 26; c++)
    {
        if (prev_dp[c] < ans)
        {
            ans = prev_dp[c];
            last_char = c;
        }
    }
    string res(n, 'a');
    int cur = last_char;
    for (int i = n - 1; i >= 0; i--)
    {
        res[i] = (char)('a' + cur);
        cur = parent[i][cur];
    }
    cout << ans << "\n"
         << res << "\n";

    return 0;
}
