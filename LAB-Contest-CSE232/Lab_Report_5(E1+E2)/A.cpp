#include <bits/stdc++.h>
using namespace std;

const int inf = 2e9;

int main()
{
    int t;
    cin >> t;
    for (int tc = 1; tc <= t; tc++)
    {
        int n;
        cin >> n;
        vector<vector<int>> cost(n + 5, vector<int>(5, 0));
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= 3; j++)
            {
                cin >> cost[i][j];
            }
        }

        vector<vector<int>> dp(n + 5, vector<int>(5, inf));
        for (int i = 1; i <= 3; i++)
            dp[0][i] = 0;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= 3; j++)
            {
                for (int k = 1; k <= 3; k++)
                {
                    if (j != k)
                    {
                        dp[i][j] = min(dp[i][j], cost[i][j] + dp[i - 1][k]);
                    }
                }
            }
        }

        int ans = inf;
        for (int i = 1; i <= 3; i++)
            ans = min(ans, dp[n][i]);
        cout << "Case " << tc << ": " << ans << endl;
    }
    return 0;
}