#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define MAXN 1000

void LIS(int nums[], int n)
{
    int dp[MAXN][2];

    for (int i = 0; i < n; i++)
    {
        dp[i][0] = 1;
        dp[i][1] = -1;
    }

    int max_len = 1, end_idx = 0;

    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (nums[i] > nums[j] && dp[i][0] < dp[j][0] + 1)
            {
                dp[i][0] = dp[j][0] + 1;
                dp[i][1] = j;
            }
        }
        if (dp[i][0] > max_len)
        {
            max_len = dp[i][0];
            end_idx = i;
        }
    }

    vector<int> lis;
    int curr_idx = end_idx;

    while (curr_idx != -1)
    {
        lis.push_back(nums[curr_idx]);
        curr_idx = dp[curr_idx][1];
    }

    reverse(lis.begin(), lis.end());

    cout << max_len << endl;
}

int main()
{
    int x;
    cin >> x;
    int *nums = new int[x];
    for (int i = 0; i < x; i++)
    {
        cin >> nums[i];
    }

    int n = x;

    LIS(nums, n);

    delete[] nums;

    return 0;
}