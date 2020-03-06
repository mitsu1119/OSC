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

  priority_queue<i64, vector<i64>, greater<i64>> que;
  i64 NUM = 1;
  i64 ans = 0;
  rep(i,0,N) {
    while(!que.empty() && que.top() <= vec[i].second) {
      que.pop();
    }
    if(que.size() < NUM) {
      ans++;
      que.push(vec[i].first);
    }
  }
  cout << ans << endl;
}
