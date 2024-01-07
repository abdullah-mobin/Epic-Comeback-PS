#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    if(t%2==1)cout<<"0\n";
    else cout << fixed << setprecision(0) << pow (2,t/2)<<endl; 
    return 0;
}