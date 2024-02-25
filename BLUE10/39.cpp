#include <iostream>
#include <iomanip>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int xx = 0;

int f(int a)
{
    int res;
    if (a == 0)
    {
        res = 0;
    }
    else if (a % 3 == 0)
    {
        res = a / 3;
    }
    else
    {
        res = a / 3;
        res += 1;
    }
    a-=res;
    return a;
}

void soln()
{
    int a, b;
    cin >> a >> b;
    cout << "Case " << ++xx << ": " << abs(f(b) - f(a-1)) << endl;
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