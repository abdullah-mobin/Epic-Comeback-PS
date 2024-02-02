//	Coder   : Abdullah Mobin
//	Created : 02/February/2024 23:22

//	status  : AC
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <bits/stdc++.h>
using namespace std;

int p, q, r, s, t, u;

double f(double mid)
{
    return p * exp(-mid) + q * sin(mid) + r * cos(mid) + s * tan(mid) + t * mid * mid + u;
}
void soln()
{
    while (cin >> p >> q >> r >> s >> t >> u)
    {
        if (f(0) * f(1) > 0)
            cout << "No solution\n";
        else
        {
            double lo = 0, hi = 1;
            while ((hi - lo) > 0.0000001)
            {
                double mid = (lo + hi) / 2;
                double val = f(mid);
                if (val > 0)
                    lo = mid;
                else
                    hi = mid;
            }
            cout << fixed << setprecision(4) << lo << endl;
        }
    }
}
int main()
{
    // int __;
    // cin >> __ ;
    // while(__-- != 0)
    soln();

    return 0;
}
