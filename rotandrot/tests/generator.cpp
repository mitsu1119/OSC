#include "testlib.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;
using i64 = int_fast64_t;
const i64 MIN_SAB = 0;
const i64 MAX_S = 1e9 + 7;
const i64 MAX_ABN = 1e9;
const i64 MIN_N = 1;

int main(int argc, char *argv[]) {
	registerGen(argc, argv, 1);
	for(i64 t = 0; t < 30; t++) {
		ofstream of(format("05_random_%02d.in", t + 1).c_str());
		of << rnd.next(MIN_SAB, MAX_S) << endl;
		of << rnd.next(MIN_SAB, MAX_ABN) << " " << rnd.next(MIN_SAB, MAX_ABN) << endl;
		of << rnd.next(MIN_N, MAX_ABN) << endl;
		of.close();
	}

	return 0;
}
