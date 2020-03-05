#include "testlib.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;
using i64 = int_fast64_t;
const i64 MIN_ABC = 1;
const i64 MAX_ABC = 2;
const i64 MIN_D = 900;
const i64 MAX_D = 1000;

int main(int argc, char *argv[]) {
	registerGen(argc, argv, 1);
	for(i64 t = 0; t < 5; t++) {
		ofstream of(format("03_large_%02d.in", t + 1).c_str());
		of << rnd.next(MIN_ABC, MAX_ABC) << " " << rnd.next(MIN_ABC, MAX_ABC) << " " << rnd.next(MIN_ABC, MAX_ABC) << " " << rnd.next(MIN_D, MAX_D) << endl;
		of.close();
	}

	return 0;
}
