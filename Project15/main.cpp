#include <iostream>
#include <ctime>
#include "test.h"
#include "euclid.h"

using namespace std;

int main() {
	int a, b;
	cout << "Enter two numbers: ";
	cin >> a >> b;
	int gcd_rec = recursive_euclid(a, b);
	int gcd_iter = iterative_euclid(a, b);
	cout << "GCD using recursive method: " << gcd_rec << endl;
	cout << "GCD using iterative method: " << gcd_iter << endl;

	// test for 1000 pairs of numbers
	const int num_tests = 1000;
	srand((unsigned int)time(NULL)); // seed for random number generator
	double time_rec = test_recursive_euclid(num_tests);
	double time_iter = test_iterative_euclid(num_tests);
	cout << "Average time for recursive method: " << time_rec << " seconds" << endl;
	cout << "Average time for iterative method: " << time_iter << " seconds" << endl;

	return 0;
}
