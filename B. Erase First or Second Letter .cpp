//	Coder : Abdullah Mobin
//	Created : 13/January/2024 22:06

#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <bits/stdc++.h>
using namespace std;

void soln()
{
    int ans = 0;
    int t;
    cin >> t;
    cin.ignore();
    string str;
    getline(cin,str);
    // cin.ignore();
    set<char> s;
    for (size_t i = 0; i < t; i++)
    {
        s.insert(str[i]);
        ans+=s.size();
    }
    cout << ans << endl;
}
int main()
{
    int __;
    cin >> __ ;
    while(__-- != 0) soln();

    return 0;
}