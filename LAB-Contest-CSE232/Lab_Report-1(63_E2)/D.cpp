//	Coder   : Abdullah Mobin
//	Created : 02/February/2024 22:37

//	status  : AC
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
    int __;
    cin >> __;
    // while(__-- != 0) soln();
    
    while (__ > 0)
    {
        int digit = __ % 10;
        if (digit != 4 && digit != 7){
            cout << "YES" << endl;
            return 0;
        }
        __ /= 10;
    }
    cout << "NO" << endl;

    return 0;
}

