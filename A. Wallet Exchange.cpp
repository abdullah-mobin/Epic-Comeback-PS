//	Coder : Abdullah Mobin
//	Created : 09/January/2024 20:29

#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <bits/stdc++.h>
using namespace std;

void soln()
{
    int a, b;
    cin >> a >> b;
    if ((a + b) % 2 == 0)
    {
        cout << "Bob\n";
    }
    else
    {
        cout << "Alice\n";
    }
}
int main()
{
    int __;
    cin >> __;
    while (__-- != 0)
        soln();

    return 0;
}