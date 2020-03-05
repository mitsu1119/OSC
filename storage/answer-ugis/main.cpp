#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int A, N, K;
    cin >> A >> N >> K;
    vector<int> W(N+1);
    for(int i = 1; i <= N; i++) cin >> W[i];

    vector<int> dp(A+1, 1010);
    dp[0] = 0;
    for(int i = 1; i <= N; i++){
        for(int w = A; w >= 0; w--){
            if(w - W[i] < 0) continue;
            dp[w] = min(dp[w], dp[w - W[i]] + 1);
        }
    }

    if(dp[A] <= K) cout << "YES" << endl;
    else cout << "NO" << endl;
}