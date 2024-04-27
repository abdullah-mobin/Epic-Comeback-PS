#include <bits/stdc++.h>
using namespace std;

vector<string> cc(string s)
{
    vector<string> v;
    string w;
    for (char c : s)
    {
        if (isalpha(c) || isdigit(c))
        {
            w += c;
        }
        else if (!w.empty())
        {
            v.push_back(w);
            w.clear();
        }
    }
    if (!w.empty())
    {
        v.push_back(w);
    }
    return v;
}
int main()
{
    string s, t;
    int i = 0;
    while (getline(cin, s) && getline(cin, t))
    {
        if (s.empty() || t.empty())
        {
            cout << setw(2) << ++i << ". Blank!" << endl;
            continue;
        }
        auto v = cc(s);
        auto vv = cc(t);
        int n = v.size();
        int m = vv.size();
        vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
        for (size_t i = 1; i <= n; i++)
        {
            for (size_t j = 1; j <= m; j++)
            {
                if (v[i - 1] == vv[j - 1])
                {
                    dp[i][j] = max(dp[i][j], dp[i - 1][j - 1] + 1);
                }
                else
                {
                    dp[i][j] = max(dp[i][j], max(dp[i - 1][j], dp[i][j - 1]));
                }
            }
        }
        cout << setw(2) << ++i << ". Length of longest match: " << dp[n][m] << endl;
    }
    return 0;
}