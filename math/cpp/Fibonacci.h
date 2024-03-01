#pragma once

#include <vector>
#include <unordered_map>

namespace Math
{
	unsigned int Fibonacci_Recursive(unsigned int n)
	{
		return (n < 2) ? n : (Fibonacci_Recursive(n - 1) + Fibonacci_Recursive(n - 2));
	}

	unsigned int Fibonacci_Memoized(unsigned int n)
	{
		static std::unordered_map<unsigned int, unsigned int> cache;
		if(n < 2) return n;
		if(cache.find(n) != cache.end()) return cache[n];
		else {cache[n] = Fibonacci_Memoized(n - 1) + Fibonacci_Memoized(n - 2); return cache[n];}
	}

	unsigned int Fibonacci_Iterative(unsigned int n)
	{
		std::vector<unsigned int> vector({0, 1});
		for(unsigned int i = 2; i < n + 1; i++) vector.push_back(vector[i - 1] + vector[i - 2]);
		return vector[n];
	}
}