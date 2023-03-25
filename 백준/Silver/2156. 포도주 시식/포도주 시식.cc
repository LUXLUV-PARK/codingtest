#include<iostream>
#include<algorithm>

using namespace std;

int dr[10001];
int dp[100001];
int N;

int main() {
    cin >> N;

    for (int i = 1; i <= N; i++) {
        cin >> dr[i];
    }
    dp[1] = dr[1];
    dp[2] = dr[1] + dr[2];
    
    for (int i = 3; i <= N; i++) {
        dp[i] = max(dp[i - 1], max(dp[i - 3] + dr[i - 1] + dr[i], dp[i - 2] + dr[i]));
    }
    cout << dp[N];
}