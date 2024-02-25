#include <iostream>
#include <iomanip>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

void soln()
{
    long long int n;
    cin >> n;
    if (floor(sqrt(8 * n - 7)) == sqrt(8 * n - 7))
    {
        cout << "1 ";
    }
    else
    {
        cout << "0 ";
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