#include <iostream>
#include <cmath>
#include <algorithm>
#include <string.h>
using namespace std;
int main()
{
    int T = 0;
    cin >> T;
    for (int i = 0; i < T; i++) {
        int n = 0;
        cin >> n;
        int a[n];
        int sum[n + 1];
        memset(sum, 0, sizeof(sum));
        sum[0] = 0;
        int tmp = 0;
        for (int j = 0; j < n; j++) {
            cin >> a[j];
            tmp += a[j];
            sum[j + 1] = tmp;
        }
        int dp[501][501];
        memset(dp, 0, sizeof(dp));
        dp[0][0] = 0;
        for (int m = 0; m < n; m++) {
            dp[m + 1][m + 1] = a[m];
        }
        for (int t = 1; t < n; t++) {
            for (int l = 1; l + t <= n; l++) {
                int r = l + t;
                dp[l][r] = sum[r] - sum[l - 1] - min(dp[l + 1][r], dp[l][r - 1]);
            }
        }
        cout << "Case #" << i + 1 << ": " << dp[1][n] << " " << sum[n] - dp[1][n] << endl;
    }
    return 0;
}
