#include "testlib.h"
#include <iostream>

using namespace std;
using i64 = int_fast64_t;
const i64 MIN_N = 1;
const i64 MAX_N = 1e5;
const i64 MIN_S = 0;
const i64 MAX_S = 1e9;
const i64 MIN_T = 1;
const i64 MAX_T = 1e9;

int main(int argc, char *argv[]) {
	registerValidation(argc, argv);
	i64 N = inf.readInt(MIN_N, MAX_N, "N");
	inf.readEoln();

	for(i64 i = 0; i < N; i++) {
		inf.readInt(MIN_S, MAX_S, format("S[%d]", i + 1));
		inf.readSpace();
		inf.readInt(MIN_T, MAX_T, format("T[%d]", i + 1));
		inf.readEoln();
	}

	inf.readEof();
	return 0;
}
