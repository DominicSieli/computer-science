#include <vector>
#include <unordered_map>

#include "math.h"

namespace Math
{
	int power(int b, int e)
	{
		int p = 1;
		for(int i = 0; i < e; i++) p *= b;
		return p;
	}

	int logarithm(int b, int p)
	{
		int e = 0;
		while(power(b, e) < p) e++;
		return e;
	}

	int summation(int start, int stop, int e = 1)
	{
		unsigned int s = 0;
		for(int i = start; i < stop + 1; i++) s += power(i, e);
		return s;
	}

	double taylor_series(int x, int n)
	{
		double s = 1;
		for(; n > 0; n--) s = 1+x*s/n;
		return s;
	}

	unsigned int factorial_recursive(unsigned int n)
	{
		return (n < 2) ? 1 : factorial_recursive(n - 1) * n;
	}

	unsigned int factorial_iterative(unsigned int n)
	{
		for(unsigned int i = n - 1; i > 0; i--) n *= i;
		return n;
	}

	unsigned int fibonacci_recursive(unsigned int n)
	{
		return (n < 2) ? n : (fibonacci_recursive(n - 1) + fibonacci_recursive(n - 2));
	}

	unsigned int fibonacci_memoized(unsigned int n)
	{
		static std::unordered_map<unsigned int, unsigned int> cache;
		if(n < 2) return n;
		if(cache.find(n) != cache.end()) return cache[n];
		else {cache[n] = fibonacci_memoized(n - 1) + fibonacci_memoized(n - 2); return cache[n];}
	}

	unsigned int fibonacci_iterative(unsigned int n)
	{
		std::vector<unsigned int> vector({0, 1});
		for(unsigned int i = 2; i < n + 1; i++) vector.push_back(vector[i - 1] + vector[i - 2]);
		return vector[n];
	}
}