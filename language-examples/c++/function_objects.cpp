#include <iostream>

template<typename T>
class FunctionObject
{
	private:
		const T data;

	public:
		FunctionObject(const T& value) : data{value} {}

		const T& GetData() const noexcept {return data;}

		bool operator()(const T& x) const {return x < data;}
};

int main()
{
	int number = 4;
	FunctionObject<int> functor(10);

	if(functor(number) == true)
	{
		std::cout << number << " < " << functor.GetData() << '\n';
	}
	else
	{
		std::cout << number << " > " << functor.GetData() << '\n';
	}
}