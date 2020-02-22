#include "testlib.h"
#include <iostream>

using namespace std;
using i64 = int_fast64_t;
const i64 MIN_n = 0;
const i64 MAX_n = 1e6;

int main(int argc, char *argv[]) {
	registerValidation(argc, argv);
	inf.readInt(MIN_n, MAX_n, "n");
	inf.readEoln();
	inf.readEof();
	return 0;
}
