#include "testlib.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;
using i64 = int_fast64_t;
const i64 MIN_N = 1;
const i64 MAX_N = 100000;

int main(int argc, char *argv[]) {
	registerGen(argc, argv, 1);
	for(i64 t = 0; t < 20; t++) {
		ofstream of(format("01_random_%02d.in", t + 1).c_str());
		of << rnd.next(MIN_N, MAX_N) << endl;
		of.close();
	}

	return 0;
}
