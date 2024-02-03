//	Coder : Abdullah Mobin
//	Created : 06/January/2024 21:10

#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <bits/stdc++.h>
using namespace std;

void soln()
{
    int s, p = 0, m = 0;
    cin >> s;
    cin.ignore();
    string str;
    getline(cin, str);
    for (auto x : str)
    {
        (x == '+') ? p++ : m++;
    }
    cout << abs(p - m) << endl;
}



int main()
{
    int __;
    cin >> __;
    while (__-- != 0)
        soln();

    return 0;
}