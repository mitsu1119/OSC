#include "testlib.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;
using i64 = int_fast64_t;
const i64 MIN_n = 0;
const i64 MAX_n = 1e6;

int main(int argc, char *argv[]) {
	registerGen(argc, argv, 1);
	for(i64 t = 0; t < 30; t++) {
		ofstream of(format("01_random_%02d.in", t + 1).c_str());
		of << rnd.next(MIN_n, MAX_n) << endl;
		of.close();
	}

	return 0;
}
