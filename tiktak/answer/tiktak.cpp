#include <iostream>

using namespace std;
using i64 = int_fast64_t;
using u64 = uint_fast64_t;

int main() {
	i64 n;
	cin >> n;

	i64 h, m, s;
	h = n / 3600;
	n -= h * 3600;
	m = n / 60;
	n -= 60 * m;
	s = n;

	cout << h << endl;
	cout << m << endl;
	cout << s << endl;

	return 0;
}

