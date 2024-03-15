#include <iostream>
#include <iomanip>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

class Solution //tle
{
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {
        vector<int> res(nums.size(), 1);
        for (size_t i = 0; i < nums.size(); i++)
        {
            for (size_t j = 0; j < nums.size(); j++)
            {
                if (i == j)
                {
                    continue;
                }
                res[i] *= nums[j];
            }
        }

        return res;
    }
};

class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> left(n, 1), right(n, 1), result(n);

        for (int i = 1; i < n; i++)
        {
            left[i] = left[i - 1] * nums[i - 1];
        }

        for (int i = n - 2; i >= 0; i--)
        {
            right[i] = right[i + 1] * nums[i + 1];
        }

        for (int i = 0; i < n; i++)
        {
            result[i] = left[i] * right[i];
        }
        return result;
    }
};

void soln()
{
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int __;
    cin >> __;
    while (__-- != 0)
        soln();

    return 0;
}