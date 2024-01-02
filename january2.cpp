//	Coder : Abdullah Mobin
//	Created : 02/January/2024 20:25

#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> findMatrix(vector<int> &nums)
{
    vector<vector<int>> res;

    while (nums.size() > 0)
    {
        set<int> uniq;
        // for (auto x : nums)
        // {
        //     if (uniq.count(x) == 0)
        //     {
        //         uniq.insert(x);

        //         // ungabunga :|
        //         nums.erase(find(nums.begin(), nums.end(), x));
        //     }
        // }

        auto i = nums.begin();
        while (i != nums.end())
        {
            if (uniq.find(*i) == uniq.end())
            {
                uniq.insert(*i);
                nums.erase(i);
            }
            else
            {
                i++;
            }
        }

        res.push_back(vector<int>(uniq.begin(), uniq.end()));
    }

    return res;
}

int main()
{
    vector<int> num;
    vector<vector<int>> result;

    num.push_back(1);
    num.push_back(1);
    num.push_back(2);
    num.push_back(2);
    num.push_back(3);
    num.push_back(4);
    num.push_back(2);
    num.push_back(5);

    result = findMatrix(num);

    for (auto &row : result)
    {
        for (auto &column : row)
        {
            cout << column << " ";
        }
        cout << endl;
    }

    return 0;
}