#include <iostream>
#include <iomanip>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> sortedSquares(vector<int> &nums)
    {
        for (size_t i = 0; i < nums.size(); i++)
        {
            nums[i] = nums[i] * nums[i];
        }
        sort(nums.begin(), nums.end());
        return nums;
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