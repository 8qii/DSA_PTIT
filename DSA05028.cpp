#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a;
        string b;
        cin >> a >> b;
        int n = a.length();
        int k = b.length();
        int res = 0;
        int dp[n + 1][k + 1];
        memset(dp, 0, sizeof(dp));
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= k; j++)
            {
                if (a[i - 1] == b[j - 1])
                    dp[i][j] = dp[i - 1][j - 1] + 1;
                else
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
        int v = abs(n - k);
        int u = dp[n][k];
        res = v - (min(n, k) - u);
        cout << res << endl;
    }
}