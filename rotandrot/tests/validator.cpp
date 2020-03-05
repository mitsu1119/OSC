#include "testlib.h"
#include <iostream>

using namespace std;
using i64 = int_fast64_t;
const i64 MIN_SAB = 0;
const i64 MAX_S = 1e9 + 7;
const i64 MAX_ABN = 1e9;
const i64 MIN_N = 1;

int main(int argc, char *argv[]) {
	registerValidation(argc, argv);
	inf.readInt(MIN_SAB, MAX_S, "S");
	inf.readEoln();
	inf.readInt(MIN_SAB, MAX_ABN, "A");
	inf.readSpace();
	inf.readInt(MIN_SAB, MAX_ABN, "B");
	inf.readEoln();
	inf.readInt(MIN_N, MAX_ABN, "N");
	inf.readEoln();
	inf.readEof();
	return 0;
}
