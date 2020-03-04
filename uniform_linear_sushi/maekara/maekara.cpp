#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using i64 = int_fast64_t;
using u64 = uint_fast64_t;
using i32 = int_fast32_t;
using u32 = uint_fast32_t;

#define int i64

signed main() {
	i64 N;
	cin >> N;
	vector<pair<i64, i64>> ST(N);
	for(i64 i = 0; i < N; i++) {
		cin >> ST[i].first >> ST[i].second;
		ST[i].second += ST[i].first;
	}
	
	i64 res = 0;
	i64 buf = -1;
	for(i64 i = 0; i < N; i++) {
		if(ST[i].first >= buf) {
			res++;
			buf = ST[i].second;
		}
	}

	cout << res << endl;
	
	return 0;
}
