//	Coder : Abdullah Mobin
//	Created : 02/January/2024 19:20

#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <bits/stdc++.h>
using namespace std;

void soln()
{
    int row, col;
    cin >> row >> col;

    bool LHS = false;

    for (size_t i = 1; i <= row; i++)
    {

        if (i % 2 == 1)
        {
            for (size_t j = 1; j < col; j++)
            {
                cout << "#";
            }
            cout << "#\n";
        }
        else
        {
            if (LHS == false)
            {
                for (size_t j = 1; j < col; j++)
                {
                    if (i % 2 == 0)
                    {
                        cout << ".";
                    }
                }
                cout << "#\n";
                LHS = true;
            }
            else
            {
                for (size_t j = 1; j < col; j++)
                {
                    if (j == 1)
                    {
                        cout << "#";
                    }
                    if (i % 2 == 0)
                    {
                        cout << ".";
                    }
                }
                cout << "\n";
                LHS = false;
            }
        }
    }
}

int main()
{
    // int __;
    // cin >> __;
    // while (__-- != 0)
    soln();

    return 0;
}