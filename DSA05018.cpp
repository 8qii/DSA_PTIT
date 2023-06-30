#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.length();
        int dp[n + 1][n + 1] = {};
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (s[i - 1] == s[j - 1])
                {
                    dp[i][j] = 1;
                }
            }
        }
        int maxx = 1;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (dp[i][j] != 0)
                {
                    dp[i][j] = dp[i - 1][j + 1] + 1;
                }
                maxx = max(maxx, dp[i][j]);
            }
        }
        cout << maxx << endl;
    }
}