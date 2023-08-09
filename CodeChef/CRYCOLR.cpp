#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int v[3][3];
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin >> v[i][j];
            }
        }
        int lt_sum = v[1][0] + v[2][0] + v[2][1]; // lower triangle sum
        int up_sum = v[1][0] + v[2][0] + v[2][1]; // upper triangle sum
        if (v[0][0] == n && v[1][1] == n && v[2][2] == n)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << max(lt_sum, up_sum);
        }
    }
    return 0;
}