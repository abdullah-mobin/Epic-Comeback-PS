#include <bits/stdc++.h>
using namespace std;

int dp[25001];
int wt[101];

int knapSack(int N, int W)
{
    for (int i = 0; i <= W; i++)
        dp[i] = 0;

    for (int i = 1; i <= N; i++)
        for (int j = W; j > 0; j--)
        {
            if (wt[i] <= j)
                dp[j] = max(dp[j], wt[i] + dp[j - wt[i]]);
        }
    return dp[W];
}
int main()
{

    int _, sum, n;
    cin >> _;
    while (_--)
    {
        cin >> n;
        sum = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> wt[i];
            sum += wt[i];
        }

        cout << sum - 2 * knapSack(n, sum / 2) << endl;
    }
    return 0;
}