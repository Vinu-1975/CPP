#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        int b[n];
        int c[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        int cnt = 0;
        int k = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] > 0 && b[i] > 0)
            {
                cnt++;
            }
            else
            {
                c[k] = cnt;
                k++;
                cnt = 0;
            }
        }
        for (int i = 0; i < k; i++)
        {
            cout << c[i] << " ";
        }
        cout << *max_element(c, c + k) << endl;
    }
    return 0;
}

// 4
// 3
// 3 1 2
// 2 4 1
// 2
// 0 0
// 10 10
// 4
// 5 4 0 2
// 3 1 1 0
// 5
// 0 1 1 2 0
// 1 1 0 0 3
