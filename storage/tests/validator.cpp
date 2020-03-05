#include "testlib.h"
#include <iostream>

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
	registerValidation(argc, argv);
	inf.readInt(MIN_A, MAX_A, "A");
	inf.readSpace();
	i64 N = inf.readInt(MIN_N, MAX_N, "N");
	inf.readEoln();
	i64 K =inf.readInt(MIN_K, N, "K");
	inf.readEoln();

	ensuref(K <= N, "K > N");

	for(i64 i = 0; i < N; i++) {
		inf.readInt(MIN_W, MAX_W, format("W[%d]", i + 1));
		inf.readEoln();
	}

	inf.readEof();
	return 0;
}
