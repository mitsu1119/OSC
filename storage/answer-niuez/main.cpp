#include <bits/stdc++.h>
using namespace std;
using i64 = long long;
#define rep(i,s,e) for(i64 (i) = (s);(i) < (e);(i)++)
#define all(x) x.begin(),x.end()

template<class T>
static inline std::vector<T> ndvec(size_t&& n, T val) noexcept {
  return std::vector<T>(n, std::forward<T>(val));
}

template<class... Tail>
static inline auto ndvec(size_t&& n, Tail&&... tail) noexcept {
  return std::vector<decltype(ndvec(std::forward<Tail>(tail)...))>(n, ndvec(std::forward<Tail>(tail)...));
}

int main() {
  i64 A, N;
  cin >> A >> N;
  i64 K;
  cin >> K;
  vector<i64> W(N);
  rep(i,0,N) {
    cin >> W[i];
  }

  vector<vector<i64>> dp(N + 1, vector<i64>(A + 1, 1e18));
  dp[0][0] = 0;
  rep(i,0,N) {
    rep(j, 0, A + 1) {
      if(j >= W[i]) {
        dp[i + 1][j] = std::min(dp[i][j], dp[i][j - W[i]] + 1);
      }
      else {
        dp[i + 1][j] = dp[i][j];
      }
    }
  }
  if(dp[N][A] <= K) {
    cout << "YES" << endl;
  }
  else {
    cout << "NO" << endl;
  }
}
