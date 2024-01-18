//	Coder : Abdullah Mobin
//	Created : 18/January/2024 18:52

#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int climbStairs(int n) {
        vector<int> dp(n + 1, 0);
        dp[0] = dp[1] = 1;

        for (int i = 2; i <= n; i++) {
            dp[i] = dp[i - 1] + dp[i - 2];
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
    cin >> __ ;
    while(__-- != 0) soln();

    return 0;
}