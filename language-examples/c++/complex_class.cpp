#include <iostream>

class Complex
{
	private:
		double real = 0.00;
		double imaginary = 0.00;

	public:
		Complex(double real = 0.00, double imaginary = 0.00) : real{real}, imaginary{imaginary} {}

		double GetReal() const {return this->real;}

		void SetReal(double real) {this->real = real;}

		double GetImaginary() const {return this->imaginary;}

		void SetImaginary(double imaginary) {this->imaginary = imaginary;}

		Complex& operator+=(Complex complex)
		{
			this->real += complex.real;
			this->imaginary += complex.imaginary;
			return *this;
		}

		Complex& operator-=(Complex complex)
		{
			this->real -= complex.real;
			this->imaginary -= complex.imaginary;
			return *this;
		}

		Complex& operator*=(Complex complex)
		{
			this->real *= complex.real;
			this->imaginary *= complex.imaginary;
			return *this;
		}

		Complex& operator/=(Complex complex)
		{
			this->real /= complex.real;
			this->imaginary /= complex.imaginary;
			return *this;
		}
};

int main()
{
	Complex complex(2.00, 4.00);

	std::cout << complex.GetReal() << '\n';
	std::cout << complex.GetImaginary() << '\n';
}