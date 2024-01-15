//	Coder : Abdullah Mobin
//	Created : 15/January/2024 18:45

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
    vector<vector<int>> findWinners(vector<vector<int>> &matches)
    {
        int present[100001] = {0};
        int losses[100001] = {0};
        vector<vector<int>> res(2);

        for (auto &i : matches)
        {
            int winner = i[0], loser = i[1];
            present[winner] = 1;
            present[loser] = 1;
            losses[loser]++;
        }

        for (size_t i = 1; i < 100001; i++)
        {
            if (!present[i])
                continue;
            if (losses[i] == 0)
                res[0].push_back(i);
            else if (losses[i] == 1)
                res[1].push_back(i);
        }
        return res;
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