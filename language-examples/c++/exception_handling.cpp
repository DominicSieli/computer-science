#include <limits>
#include <iostream>
#include <exception>

class OutOfRange
{
	private:
		int data = std::numeric_limits<int>::max();

	public:
		const int GetData() const noexcept
		{
			return data;
		}

		void AddData(int addend)
		{
			try
			{
				if(data + addend < 1)
				{
					data = std::numeric_limits<int>::max();
					throw std::runtime_error("Value out of range exception in OutOfRange class AddData method!");
				}
				else
				{
					data += addend;
				}
			}
			catch(const std::exception& exception)
			{
				std::cerr << exception.what() << '\n';
			}
			catch(...)
			{
				std::cerr << "Runtime error in ExceptionHandling class AddData method!!" << '\n';
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
	OutOfRange out_Of_range;
	out_Of_range.AddData(10);
	double quotient = Divide(10.00, 0.00);
}