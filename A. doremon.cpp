//	Coder : Abdullah Mobin
//	Created : 10/January/2024 20:08

#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <bits/stdc++.h>
using namespace std;

void soln()
{
}
int main()
{

    long n, m, c;
    cin >> n >> m;
    if (n < m){
        cout << "-1" << endl;
        return 0;
    }
    else
    {
        c = (n + 1) / 2;
        while (c % m != 0)
            c++;
    }
    cout << c << endl;
    return 0;
}