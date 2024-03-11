#include <iostream>
#include <iomanip>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int biri, k;
    while (cin >> biri >> k)
    {
        int res=biri,rem=res;
        while (rem >= k)
        {
            res += rem/k;
            rem = (rem/k)+(rem%k);
        }
        cout << res << endl; 
    }

    return 0;
}