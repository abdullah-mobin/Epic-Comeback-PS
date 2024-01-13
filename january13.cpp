//	Coder : Abdullah Mobin
//	Created : 13/January/2024 18:15

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
    int minSteps(std::string s, std::string t)
    {
        vector<int> count_s(26, 0);
        vector<int> count_t(26, 0);

        for (char ch : s)
        {
            count_s[ch - 'a']++;
        }

        for (char ch : t)
        {
            count_t[ch - 'a']++;
        }

        int steps = 0;
        for (int i = 0; i < 26; i++)
        {
            steps += abs(count_s[i] - count_t[i]);
        }

        return steps / 2;
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