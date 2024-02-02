//	Coder : Abdullah Mobin
//	Created : 02/February/2024 21:56

//  status : Ac
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <bits/stdc++.h>
using namespace std;

void soln()
{
    int n, x, y, d;
    cin >> n >> x >> y >> d;
    if (abs(y - x) % d == 0)
    {
        cout << abs(y - x) / d << endl;
        return;
    }

    else
    {
        int c = INT_MAX;
        if ((y - 1) % d == 0)
        {
            int t = ((y - 1) / d )+ (x - 1) / d + (bool)((x - 1) % d); // 1 kom beshi tarchera jinis :(
            c = min(c, t);
        }
        if ((n - y) % d == 0)
        {
            int t = ((n - y) / d )+ (n - x) / d + (bool)((n - x) % d);
            c = min(c, t);
        }
        if (c == INT_MAX)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << c << endl;
        }
    }
}
int main()
{
    int __;
    cin >> __;
    while (__-- != 0)
        soln();

    return 0;
}