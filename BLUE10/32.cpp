#include <iostream>
#include <iomanip>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

long long int xx = 0;

void soln()
{
    int x1, x2, y1, y2, z1, z2;
    int xmin = 0, xmax = INT_MAX, ymin = 0, ymax = INT_MAX, zmin = 0, zmax = INT_MAX;
    int l, b, w;
    int n;
    cin >> n;
    while (n--)
    {
        cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2;
        xmin = max(xmin, x1);
        xmax = min(xmax, x2);
        l = (xmax - xmin);
        ymin = max(ymin, y1);
        ymax = min(ymax, y2);
        b = (ymax - ymin);
        zmin = max(zmin, z1);
        zmax = min(zmax, z2);
        w = (zmax - zmin);
    }
    if ((l * b * w) > 0)
    {
        cout << "Case " << ++xx << ": " << (l * b * w) << endl;
    }
    else
    {
        cout << "Case " << ++xx << ": " << 0 << endl;
    }
    
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