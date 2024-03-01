#pragma once

namespace DataStructures
{
	template<typename T, unsigned int X, unsigned int Y, unsigned int Z>
	class Matrix3D
	{
	private:
		T matrix[X * Y * Z];

	public:
		Matrix3D()
		{}

		~Matrix3D()
		{}

		unsigned int SizeX()
		{
			return X;
		}

		unsigned int SizeY()
		{
			return Y;
		}

		unsigned int SizeZ()
		{
			return Z;
		}

		T& Index(unsigned int x, unsigned int y, unsigned int z)
		{
			if(x < 0) x = 0;
			if(y < 0) y = 0;
			if(z < 0) z = 0;
			if(x > X) x = X;
			if(y > Y) y = Y;
			if(z > Z) z = Z;

			return matrix[z + y * Z + x * Y * Z];
		}
	};
}