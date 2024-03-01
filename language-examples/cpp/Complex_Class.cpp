#include <iostream>

class Complex
{
private:
	double real = 0.00;
	double imaginary = 0.00;

public:
	Complex(double r = 0.00, double i = 0.00) : real{r}, imaginary{i} {}

	double Get_Real() const {return this->real;}

	void Set_Real(double r) {this->real = r;}

	double Get_Imaginary() const {return this->imaginary;}

	void Set_Imaginary(double i) {this->imaginary = i;}

	Complex& operator+=(Complex c)
	{
		this->real += c.real;
		this->imaginary += c.imaginary;
		return *this;
	}

	Complex& operator-=(Complex c)
	{
		this->real -= c.real;
		this->imaginary -= c.imaginary;
		return *this;
	}

	Complex& operator*=(Complex c)
	{
		this->real *= c.real;
		this->imaginary *= c.imaginary;
		return *this;
	}

	Complex& operator/=(Complex c)
	{
		this->real /= c.real;
		this->imaginary /= c.imaginary;
		return *this;
	}
};

int main()
{
	Complex complex(2.00, 4.00);

	std::cout << complex.Get_Real() << '\n';
	std::cout << complex.Get_Imaginary() << '\n';
}