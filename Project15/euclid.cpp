#include "euclid.h"

int recursive_euclid(int a, int b) {
	if (b == 0) {
		return a;
	}
	else {
		return recursive_euclid(b, a % b);
	}
}

int iterative_euclid(int a, int b) {
	while (b != 0) {
		int temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}