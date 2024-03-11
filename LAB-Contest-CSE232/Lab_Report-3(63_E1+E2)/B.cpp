#include <iostream>
#include <iomanip>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

void soln()
{
    int n, d, r;

    while (cin >> n >> d >> r)
    {

        if (n == 0 && d == 0 && r == 0)
        {
            return;
        }
        vector<int> sokal, bikal;
        for (size_t i = 0; i < n; i++)
        {
            int _;
            cin >> _;
            sokal.push_back(_);
        }
        for (size_t i = 0; i < n; i++)
        {
            int _;
            cin >> _;
            bikal.push_back(_);
        }
        sort(sokal.begin(), sokal.end());
        sort(bikal.begin(), bikal.end());
        int h = 0;
        for (size_t i = 0; i < n; i++)
        {
            int dd = sokal[i] + bikal[n - 1 -i];
            if (dd > d)
            {
                int dif = dd - d;
                h += dif;
            }
        }
        cout << h * r << endl;
    }
}
int main()
{
    // int __;
    // cin >> __;
    // while (__-- != 0)
    soln();

    return 0;
}