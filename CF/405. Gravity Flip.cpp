//	Coder : Abdullah Mobin
//	Created : 01/January/2024 18:58

#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <cmath>
#include <cstring>
#include <bits/stdc++.h>
using namespace std;

void soln()
{
    
}
int main()
{
    int __,x;
    cin >> __ ;
    vector<int> cols;
    while(__--){
        cin >> x;
        cols.push_back(x); 
    }

    sort(cols.begin(), cols.end());

    for(auto x : cols){
        cout << x << " " ;
    }
    cout << "\n";
    

    return 0;
}