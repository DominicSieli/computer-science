#pragma once

namespace DataStructures
{
	template<typename T, unsigned int X, unsigned int Y>
	class Matrix2D
	{
	private:
		T matrix[X * Y];

	public:
		Matrix2D()
		{}

		~Matrix2D()
		{}

		unsigned int SizeX()
		{
			return X;
		}

		unsigned int SizeY()
		{
			return Y;
		}

		T& Index(unsigned int x, unsigned int y)
		{
			if(x < 0) x = 0;
			if(y < 0) y = 0;
			if(x > X) x = X;
			if(y > Y) y = Y;

			return matrix[(X * y) + x];
		}
	};
}