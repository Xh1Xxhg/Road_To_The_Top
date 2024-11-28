#include <array>
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

namespace x01
{
	void test_array()
	{
		cout << "\ntest_array()\n";
	}

	array<long, ASIZE> c;

	clock_t timeStart = clock();
	for (long i = 0; i < ASIZE; ++i)
	{
		c[i] = rand();
	}
}