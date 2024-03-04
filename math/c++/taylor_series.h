#pragma once

namespace Math
{
	double Taylor_Series(int x, int n)
	{
		double s = 1;
		for(; n > 0; n--) s = 1+x*s/n;
		return s;
	}
}