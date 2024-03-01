#pragma once

namespace Math
{
	unsigned int Factorial_Recursive(unsigned int n)
	{
		return (n < 2) ? 1 : Factorial_Recursive(n - 1) * n;
	}

	unsigned int Factorial_Iterative(unsigned int n)
	{
		for(unsigned int i = n - 1; i > 0; i--) n *= i;
		return n;
	}
}