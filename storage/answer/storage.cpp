#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <unordered_map>
#include <complex>
#include <algorithm>

using namespace std;
using i64 = int_fast64_t;
using u64 = uint_fast64_t;
using i32 = int_fast32_t;
using u32 = uint_fast32_t;

#define int i64

template<class T>
inline bool chmin(T &a, T b) { if(a > b) {a = b; return true;} return false; }
template <class T>
inline bool chmax(T &a, T b) { if(a < b) {a = b; return true;} return false; }
const int INF = 1LL << 60;

signed main() {
	i64 A, N, K;
	cin >> A >> N;
	cin >> K;
	vector<i64> Ws(N);
	for(i64 i = 0; i < N; i++) cin>> Ws[i];

	vector<vector<i64>> dp(N + 10, vector<i64>(A + 10, INF));
	dp[0][0] = 0;

	for(i64 i = 0; i < N; i++) {
		for(i64 j = 0; j <= A; j++) {
			dp[i + 1][j] = min(dp[i + 1][j], dp[i][j]);
			if(j >= Ws[i]) dp[i + 1][j] = min(dp[i + 1][j], dp[i][j - Ws[i]] + 1);
		}
	}

	if(dp[N][A] <= K) cout << "YES" << endl;
	else cout << "NO" << endl;
	
	return 0;
}
