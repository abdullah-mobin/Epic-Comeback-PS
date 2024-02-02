//	Coder   : Abdullah Mobin
//	Created : 02/February/2024 22:30

//	status  : Ac
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
    int res = 0,tem;
    vector<int>a,b;

    for (int i = 0; i < __; i++)
    {
        cin >> tem ;
        a.push_back(tem);
        cin >> tem ;
        b.push_back(tem);

    }

    for (int i = 0; i < __; i++)
    {
        for (int j = 0; j < __; j++)
        {
            if (a[i] == b[j])
            {
                res++;
            }
        }
    }

    cout << res << endl;

    return 0;
}