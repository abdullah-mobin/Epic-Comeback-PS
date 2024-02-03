//	Coder : Abdullah Mobin
//	Created : 04/January/2024 19:08

#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <bits/stdc++.h>
using namespace std;

void soln()
{
    string str;
    getline(cin,str);
    int z=0,o=0;
    for (auto x : str)
    {
        if (x=='0')
        {
            z++;
        }else{
            o++;
        }        
    }

    int m = min(z,o);
    (m%2==0)?cout<<"NET\n":cout<<"DA\n";
    
}


int main()
{
    int __;
    cin >> __ ;
    cin.ignore();
    while(__-- != 0) soln();

    return 0;
}