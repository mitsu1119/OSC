#include "testlib.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;
using i64 = int_fast64_t;
const i64 MIN_A = 1;
const i64 MAX_A = 1000;
const i64 MIN_K = 1;
const i64 MIN_N = 1;
const i64 MAX_N = 1000;
const i64 MIN_W = 1;
const i64 MAX_W = 100;

int main(int argc, char *argv[]) {
	registerGen(argc, argv, 1);
	for(i64 t = 0; t < 20; t++) {
		ofstream of(format("07_random_%02d.in", t + 1).c_str());
		i64 N = rnd.next(MIN_N, MAX_N);
		of << rnd.next(MIN_A, MAX_A) << " " << N << endl;
		of << rnd.next(MIN_K, N) << endl;
		for(i64 i = 0; i < N; i++) of << rnd.next(MIN_W, MAX_W) << endl;
		of.close();
	}

	return 0;
}
