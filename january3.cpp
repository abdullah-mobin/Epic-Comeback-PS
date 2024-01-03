//	Coder : Abdullah Mobin
//	Created : 03/January/2024 17:45

#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <bits/stdc++.h>
using namespace std;


/* sol^n func */

int numberOfBeams(vector<string> &bank)
{
    int old = 0, res = 0, resent;

    for (auto str : bank)
    {
        resent = 0;
        for (auto binary : str)
        {
            if (binary == '1')
            {
                resent++;
            }
        }
        if (resent > 0)
        {
            res += old * resent;
            old = resent;
        }
    }

    return res;    

}

void soln()
{
}
int main()
{
    int __;
    cin >> __;
    while (__-- != 0)
        soln();

    return 0;
}