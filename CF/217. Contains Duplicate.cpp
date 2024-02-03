//	Coder : Abdullah Mobin
//	Created : 02/January/2024 18:58

#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <bits/stdc++.h>
using namespace std;


/* answer func */

bool containsDuplicate(vector<int> &nums)
{
    set<int> v;
    for (auto x : nums)
    {
        if (v.count(x) == 1 )
        {
            return true;
        }
        v.insert(x);
    }
    return false;
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