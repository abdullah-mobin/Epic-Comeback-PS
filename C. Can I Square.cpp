//	Coder : Abdullah Mobin
//	Created : 03/January/2024 18:24

#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <bits/stdc++.h>
using namespace std;

void soln()
{
    long long int n,dami,t=0;
    cin >> n;
    for (size_t i = 0; i < n; i++)
    {
        cin >> dami;
        t+=dami;
    }
    long long int len = (int)(sqrt(t));
    if (len*len == t)
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