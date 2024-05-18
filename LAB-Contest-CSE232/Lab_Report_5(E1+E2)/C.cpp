#include <iostream>
#include <algorithm>
#include <string.h>
#include <limits.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    int dp[2][n + 1];
    memset(dp, 0, sizeof(dp));

    dp[0][0] = INT_MIN;
    int res = 0;
    for (int i = 1; i <= n; i++)
    {
        dp[0][i] = arr[i];
        for (int j = 0; j < i; j++)
        {
            if (dp[0][j] < dp[0][i])
            {
                dp[1][i] = max(dp[1][i], dp[1][j] + 1);
                res = max(res, dp[1][i]);
            }
        }
    }

    cout << res << endl;
}