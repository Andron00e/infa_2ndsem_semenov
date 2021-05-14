#include <iostream>
#include <string>
#include <vector>

using namespace std;

long long calc(string s) {
    vector<vector<long long>> dp(s.size(), vector<long long>(4, 0));
    const string uddu = "uddu";
    dp[0][0] = s[0] == uddu[0];
    for (int i = 1; i < s.size(); i++) {
        dp[i][0] = dp[i - 1][0] + int(s[i] == "uddu"[0]);
    }
    for (int j = 1; j < 4; j++) {
        for (int i = j; i < s.size(); i++) {
            dp[i][j] = dp[i - 1][j] + (s[i] == "uddu"[j] ? dp[i - 1][j - 1] : 0);
        }
    }
    return dp.back().back();
}

int main() {
    string s;
    cin >> s;
    cout << calc(s);
}
