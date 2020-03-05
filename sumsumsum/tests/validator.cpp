#include "testlib.h"
#include <iostream>

using namespace std;
using i64 = int_fast64_t;
const i64 MIN_ABC = 1;
const i64 MAX_ABC = 100;
const i64 MIN_D = 1;
const i64 MAX_D = 1000;

int main(int argc, char *argv[]) {
	registerValidation(argc, argv);
	inf.readInt(MIN_ABC, MAX_ABC, "A");
	inf.readSpace();
	inf.readInt(MIN_ABC, MAX_ABC, "B");
	inf.readSpace();
	inf.readInt(MIN_ABC, MAX_ABC, "C");
	inf.readSpace();
	inf.readInt(MIN_D, MAX_D, "D");
	inf.readEoln();
	inf.readEof();
	return 0;
}
