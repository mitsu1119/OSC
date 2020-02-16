#include "testlib.h"
#include <iostream>

using namespace std;
using i64 = int_fast64_t;
const i64 MIN_N = 1;
const i64 MAX_N = 100000;

int main(int argc, char *argv[]) {
	registerValidation(argc, argv);
	inf.readInt(MIN_N, MAX_N, "N");
	inf.readEoln();
	inf.readEof();
	return 0;
}
