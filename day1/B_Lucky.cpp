#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string ti;
        cin >> ti;
        int sum1 = 0, sum2 = 0;
        for (int i = 0; i < 3; ++i)
        {
            sum1 += ti[i];
        }
        for (int i = 3; i < 6; i++)
        {
            sum2 += ti[i];
        }
        if (sum1 == sum2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}