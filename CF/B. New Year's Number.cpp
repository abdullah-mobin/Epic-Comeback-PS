//	Coder : Abdullah Mobin
//	Created : 05/January/2024 19:44

#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <bits/stdc++.h>
using namespace std;

void soln()
{
    long long int n,rem,div;
    cin >> n;
    rem = n%2020;
    div = n/2020;
    if (rem <= div)
    {
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }
    
}
int main()
{
    int __;
    cin >> __ ;
    while(__-- != 0) soln();

    return 0;
}