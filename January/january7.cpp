//	Coder : Abdullah Mobin
//	Created : 07/January/2024 18:14

#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <bits/stdc++.h>
using namespace std;

/* Sol^n func */

int numberOfArithmeticSlices(vector<int> &nums)
{

    int s = nums.size();
    vector<map<int, int>> resultSet(s);
    int res = 0;

    for (size_t i = 1; i < s; i++)
    {
        for (size_t j = 0; j < i; j++)
        {
            long long int c, dif = (long long)nums[i] - nums[j];

            if (dif < INT_MIN || dif > 2147483647)
                continue;

            if (resultSet[j].count(dif))
            {
                c = resultSet[j][dif];
            }
            else
            {
                c = 0;
            }

            res += c;
            resultSet[i][dif] += c + 1;
        }
    }
    return res;
}

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