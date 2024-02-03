//	Coder   : Abdullah Mobin
//	Created : 03/February/2024 19:58

//	status  :
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxSumAfterPartitioning(vector<int> &arr, int k)
    {
        int n = arr.size();
        vector<int> dp(n + 1, 0);
        for (int i = 0; i < n; i++)
        {
            int m = 0, s = 0;
            for (int j = i; j >= max(0, i - k + 1); j--)
            {
                m = max(m, arr[j]);
                int c = m * (i - j + 1) + dp[j];
                s = max(s, c);
            }
            dp[i + 1] = s;
        }
        return dp[n];
    }
};
void soln()
{
}
int main()
{
    int __;
    cin >> __;
    while (__-- != 0)
        soln();

    return 0;
}