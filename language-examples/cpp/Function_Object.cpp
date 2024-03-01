#include <iostream>

template<typename T>
class Function_Object
{
private:
	const T data;

public:
	Function_Object(const T& value) : data{value} {}
	const T& Get_Data() const noexcept {return this->data;}
	bool operator()(const T& x) const {return x < this->data;}
};

int main()
{
	int number = 4;
	Function_Object<int> functor(10);

	if(functor(number) == true)
	{
		std::cout << number << " < " << functor.Get_Data() << '\n';
	}
	else
	{
		std::cout << number << " > " << functor.Get_Data() << '\n';
	}
}