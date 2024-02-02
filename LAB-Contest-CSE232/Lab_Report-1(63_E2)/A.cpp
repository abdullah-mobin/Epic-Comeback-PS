//	Coder : Abdullah Mobin
//	Created : 02/February/2024 21:41

//  status : ac
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <bits/stdc++.h>
using namespace std;

void soln()
{
    int b, p, f,h, c;
    cin >> b >> p >> f >> h >> c;
    int res = 0;
    if (h > c) {
      res += h * min(b / 2, p);
      b -= 2 * min(b / 2, p);
      res += c * min(b / 2, f);
      b -= 2 * min(b / 2, f);
    } else {
      res += c * min(b / 2, f);
      b -= 2 * min(b / 2, f);
      res += h * min(b / 2, p);
      b -= 2 * min(b / 2, p);
    }
    cout << res << endl;
}
int main()
{
    int __;
    cin >> __ ;
    while(__-- != 0) soln();

    return 0;
}