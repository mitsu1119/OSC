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
  i64 N = 3;
  vector<i64> A(N);
  rep(i,0,N) {
    cin >> A[i];
  }
  i64 D;
  cin >> D;

  vector<vector<i64>> dp(N + 1, vector<i64>(D + 1, 0));
  dp[0][0] = 1;
  rep(i,0,N) {
    rep(j,0,D + 1) {
      if(j >= A[i]) {
        dp[i + 1][j] = dp[i][j] + dp[i + 1][j - A[i]];
      }
      else {
        dp[i + 1][j] = dp[i][j];
      }
    }
  }
  cout << dp[N][D] << endl;
}
