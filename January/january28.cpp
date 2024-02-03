//	Coder : Abdullah Mobin
//	Created : 28/January/2024 18:37

#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <bits/stdc++.h>
using namespace std;

int numSubmatrixSumTarget(vector<vector<int>> &matrix, int target)
{
    int whole_size = matrix.size();
    int row_size = matrix[0].size();
    int res = 0;

    for (size_t x = 0; x < row_size; x++)
    {
        int total[105] = {0};
        for (size_t y = x; y < row_size; y++)
        {
            for (size_t i = 0; i < whole_size; i++)
            {
                total[i] += matrix[i][y];
            }
            for (size_t i = 0; i < whole_size; i++)
            {
                int sum = 0;
                for (size_t j = i; j < whole_size; j++)
                {
                    sum += total[j];
                    if (sum == target)
                    {
                        res++;
                    }
                }
            }
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