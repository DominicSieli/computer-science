#pragma once

namespace Math
{
	int Power(int b, int e)
	{
		int p = 1;
		for(int i = 0; i < e; i++) p *= b;
		return p;
	}

	int Logarithm(int b, int p)
	{
		int e = 0;
		while(Power(b, e) < p) e++;
		return e;
	}

	int Summation(int start, int stop, int e = 1)
	{
		unsigned int s = 0;
		for(int i = start; i < stop + 1; i++) s += Power(i, e);
		return s;
	}
}