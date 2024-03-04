#include <limits>
#include <iostream>
#include <exception>

class Out_Of_Range
{
private:
	int data = std::numeric_limits<int>::max();

public:
	const int Get_Data() const noexcept
	{
		return this->data;
	}

	void Add_Data(int addend)
	{
		try
		{
			if(data + addend < 1)
			{
				this->data = std::numeric_limits<int>::max();
				throw std::runtime_error("Value out of range exception in Out_Of_Range class Add_Data method!");
			}
			else
			{
				this->data += addend;
			}
		}
		catch(const std::exception& exception)
		{
			std::cerr << exception.what() << '\n';
		}
		catch(...)
		{
			std::cerr << "Runtime error in ExceptionHandling class Add_Data method!!" << '\n';
		}
	}
};

double Divide(double numerator, double denominator)
{
	double quotient = 0.00;

	try
	{
		if(denominator == 0.00)
		{
			throw std::runtime_error("Divide by 0 exception in Divide function!");
		}
		else
		{
			quotient = numerator / denominator;
		}
	}
	catch(std::exception& exception)
	{
		std::cerr << exception.what() << '\n';
	}
	catch(...)
	{
		std::cerr << "Runtime error in Divide function!" << '\n';
	}

	return quotient;
}

int main()
{
	Out_Of_Range out_Of_Range;
	out_Of_Range.Add_Data(10);
	double quotient = Divide(10.00, 0.00);
}