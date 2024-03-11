#include <iostream>
#include <iomanip>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

void soln()
{
    int n;
    cin >> n;
    vector<int> p;

    int sum = 0, x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        p.push_back(x);
        sum += p[i];
    }

    vector<int> res;
    int sum2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (i == 0 || p[i] * 2 <= p[0])
        {
            res.push_back(i + 1);
            sum2 += p[i];
        }
    }

    if (sum2 * 2 > sum)
    {
        cout << res.size() << endl;
        for (int i = 0; i < res.size(); i++)
        {
            cout << res[i] << " ";
        }
        cout << endl;
    }
    else
    {
        cout << "0" << endl;
    }
}
int main()
{

    // int __;
    // cin >> __ ;
    // while(__-- != 0)
    soln();

    return 0;
}