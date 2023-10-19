//	Coder : Abdullah Mobin
//	Created : 19/October/2023 05:08

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
    // int __;
    // cin >> __ ;
    // while(__-- != 0) soln();

    int n,sum = 0;
    cin >> n;
    int arr[n];
    for (size_t i = 0; i < n; i++)
    {
        cin >> arr [i];
        sum+=arr[i];
    }

    sort(arr,arr+n,greater<int>());
    sum = ceil(sum/2);
    int sum2=0,f;
    for (size_t i = 0 ; i < n ; i++)
    {
        sum2+=arr[i];
        if(sum2 > sum) {
            f = i;
            break;
        }
    }

    cout << f+1 << endl;
    


    

    return 0;
}
