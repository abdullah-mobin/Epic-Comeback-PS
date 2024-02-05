//	Coder   : Abdullah Mobin
//	Created : 05/February/2024 00:24

//	status  :
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <bits/stdc++.h>
using namespace std;

// std::ios_base::sync_with_stdio(false);

// #include<iostream>
// #include<string>
// using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n,f=0;
        string a, b, c;
        cin >> n>> a >> b >> c;
        for (int j = 0; j < n; j++)
        {
            if (a[j] != c[j] && b[j] != c[j])
            {
                cout << "YES" << endl;
                f++;
                break;
            }
        }
        if(f==0){
            cout << "NO" << endl;
        }
        
    }
}
// void soln()
// {
//     long n;
//     cin >> n;
//     string a, b, c;
//     cin >> a >> b >> c;
//     bool res(false);
//     for (long p = 0; !res && p < n; p++)
//     {
//         if (c[p] != a[p] && c[p] != b[p])
//         {
//             res = true;
//         }
//     }

//     cout << (res ? "YES" : "NO") << endl;
// }
// int main()
// {
//     int __;
//     cin >> __;
//     while (__-- != 0)
//         soln();

//     return 0;
// }
