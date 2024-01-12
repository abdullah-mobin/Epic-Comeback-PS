//	Coder : Abdullah Mobin
//	Created : 12/January/2024 18:49

#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <bits/stdc++.h>
using namespace std;

void soln()
{
    long long int n,k;
    cin >> n >> k;
    if (k * k > n)
    {
        cout << "NO" << endl;
    }
    else if ((n % 2 == 1 && k % 2 == 1) || (n % 2 == 0 && k % 2 == 0))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
int main()
{
    int __;
    cin >> __;
    while (__-- != 0)
        soln();

    return 0;
}