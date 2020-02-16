#include <iostream>

using namespace std;
using i64 = int_fast64_t;
using u64 = uint_fast64_t;

int main() {
	i64 N;
	cin >> N;

	if(N % 3 == 0) cout << "fizz";
	if(N % 5 == 0) cout << "buzz";
	if(N % 3 != 0 && N % 5 != 0) cout << N;
	cout << "\n";

	return 0;
}

