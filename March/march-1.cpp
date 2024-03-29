#include <iostream>
#include <iomanip>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string maximumOddBinaryNumber(string s)
    {
        map<char, int> fr;
        for (auto x : s)
        {
            fr[x]++;
        }

        int o = fr['1'];
        int z = fr['0'];

        string res = "";
        for (size_t i = 1; i <= o + z; i++)
        {
            if (i < o)
            {
                res.append("1");
            }
            else if (i == o + z)
            {
                res.append("1");
            }
            else
            {
                res.append("0");
            }
        }
        return res;
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