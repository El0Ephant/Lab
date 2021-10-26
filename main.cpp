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

int main() {
	assert(!isLeapYear(100));
	assert(isLeapYear(400));
	assert(isLeapYear(404));
}