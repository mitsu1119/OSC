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

signed main() {
	i64 a, b, c, d;
	cin >> a >> b >> c >> d;

	while(true) {}
	i64 res = 0;
	for(i64 x = 0; x <= (d / a); x++) {
		for(i64 y = 0; y <= (d / b); y++) {
			for(i64 z = 0; z <= (d / c); z++) {
				if(a * x + b * y + c * z == d) res++;
			}
		}
	}

	cout << res << endl;
	
	return 0;
}
