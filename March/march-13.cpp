#include <iostream>
#include <iomanip>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int pivotInteger(int n)
    {
        double res = sqrt(n * (n + 1) / 2.0);
        if (fmod(res, 1.0) != 0)
            return -1;
        else
            return static_cast<int>(res);
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