#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using i64 = int_fast64_t;
using u64 = uint_fast64_t;
using i32 = int_fast32_t;
using u32 = uint_fast32_t;

#define int i64

bool comp(pair<i64, i64> a, pair<i64, i64> b) {
	if(a.second != b.second) return a.second < b.second;
	return a.first < b.first;
}

signed main() {
	i64 N;
	cin >> N;
	vector<pair<i64, i64>> ST(N);
	for(i64 i = 0; i < N; i++) {
		cin >> ST[i].first >> ST[i].second;
		ST[i].second += ST[i].first;
	}

	sort(ST.begin(), ST.end(), comp);
	
	i64 res = 0;
	i64 buf[] = {-1, -1};
	i64 idx = -1;
	for(i64 i = 0; i < N; i++) {
		if(ST[i].first >= buf[0]) idx = 0;
		if(ST[i].first >= buf[1]) {
			if(idx == 0) {
				if(buf[1] > buf[0]) idx = 1;
			} else {
				idx = 1;
			}
		}		

		if(idx != -1) {
			res++;
			buf[idx] = ST[i].second;
		}

		idx = -1;
	}

	cout << res << endl;
	
	return 0;
}
