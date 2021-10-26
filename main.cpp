#include <assert.h>
using namespace std;

bool isLeapYear(int year) {
	if (year % 100 != 0) {
		return year % 4 == 0;
	}
	else {
		return year % 16 == 0;
	}
}

int LaterInYear(int d1, int m1, int d2, int m2) {
	if (d1 > d2) {
		return 1;
	}
	else if (d1 < d2) {
		return 2;
	}
	else {
		if (m1 > m2) {
			return 1;
		}
		else if (m1 < m2) {
			return 2;
		}
		else return 0;
	}
}

int main() {
	assert(!isLeapYear(100));
	assert(isLeapYear(400));
	assert(isLeapYear(404));
}