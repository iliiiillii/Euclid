#include <cstdlib>
#include <ctime>
#include "euclid.h"
#include "test.h"

double test_recursive_euclid(int num_tests) {
	int a, b, gcd;
	clock_t start, end;
	double time_sum = 0.0;
	for (int i = 0; i < num_tests; i++) {
		a = rand();
		b = rand();
		start = clock();
		gcd = recursive_euclid(a, b);
		end = clock();
		time_sum += (double)(end - start) / CLOCKS_PER_SEC;
	}
	return time_sum / num_tests;
}

double test_iterative_euclid(int num_tests) {
	int a, b, gcd;
	clock_t start, end;
	double time_sum = 0.0;
	for (int i = 0; i < num_tests; i++) {
		a = rand();
		b = rand();
		start = clock();
		gcd = iterative_euclid(a, b);
		end = clock();
		time_sum += (double)(end - start) / CLOCKS_PER_SEC;
	}
	return time_sum / num_tests;
}