//	Coder : Abdullah Mobin
//	Created : 04/January/2024 18:05

#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <bits/stdc++.h>
using namespace std;


/* sol^n func */

int minOperations(vector<int> &nums)
{
    int res = 0;
    map<int, int> apparance;
    for (auto n : nums)
    {
        apparance[n]++;
    }

    for (auto ele : apparance)
    {
        int c = ele.second;
        if (c==1)
        {
            res = -1;
            return res;
        }
        else
        {
            int three = c/3;
            int two = (c%3)/2;
            res += three+two;
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