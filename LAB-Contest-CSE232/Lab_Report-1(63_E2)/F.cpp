//	Coder   : Abdullah Mobin
//	Created : 02/February/2024 22:59

//	status  :
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <bits/stdc++.h>
using namespace std;

void soln()
{
    // int x,t;
    // cin >> x;
    // vector<int>vc;
    // for (size_t i = 0; i < x; i++)
    // {
    //     cin >> t ,vc.push_back(t); 
    // }
    // sort(vc.begin(), vc.end());
    // int xx = 0,res = 0;
    // while (2 * vc[xx] <= vc[xx + 1])
    // {
    //     xx++;
    //     res++;
    // }
    
    
}
int main()
{
    int __, x, indx = 0, kang = 0, res = 0;
    cin >> __;

    // while(__-- != 0) soln();

    vector<int> vc;

    for (int i = 0; i < __; i++)
        cin >> x, vc.push_back(x);
    
    sort(vc.begin(), vc.end());

    for (size_t i = 0; i < __ - 1; i++)
    {
        if (2 * vc[indx] <= vc[i + 1])
            kang++, indx++;
    }

    res = __ - min(__ / 2, kang);

    cout << res << endl;
    return 0;
}
