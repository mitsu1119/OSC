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
  i64 N;
  cin >> N;
  std::vector<pair<i64, i64>> vec;
  rep(i,0,N) {
    i64 s, t;
    cin >> s >> t;
    vec.push_back({ s + t, s });
  }

  sort(all(vec));


  vector<i64> ne(1, 0);
  i64 ans = 0;
  rep(i,0,N) {
    if(ne[0] <= vec[i].second) {
      ne[0] = vec[i].first;
      ans++;
    }
  }
  cout << ans << endl;
}
