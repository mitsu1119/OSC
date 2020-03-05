#include "testlib.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;
using i64 = int_fast64_t;
const i64 MIN_N = 1;
const i64 MAX_N = 1e5;
const i64 MIN_S = 0;
const i64 MAX_S = 1e9;
const i64 MIN_T = 1;
const i64 MAX_T = 1e9;

int main(int argc, char *argv[]) {
	registerGen(argc, argv, 1);
	for(i64 t = 0; t < 20; t++) {
		ofstream of(format("06_random_%06d.in", t + 1).c_str());
		i64 N = rnd.next(MIN_N, MAX_N);
		of << N << endl;
		for(i64 i = 0; i < N; i++) of << rnd.next(MIN_S, MAX_S) << " " << rnd.next(MIN_T, MAX_T) << endl;
		of.close();
	}

	return 0;
}
