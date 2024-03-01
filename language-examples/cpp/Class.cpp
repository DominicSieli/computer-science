#include <iostream>

template<typename T>
class Abstract_Base_Class
{
public:
	virtual ~Abstract_Base_Class() {}
	virtual void Set_Data(T) = 0;
	virtual T Get_Data() const = 0;
};

template<typename T>
class Sub_Class : public Abstract_Base_Class<T>
{
private:
	T data;

public:
	Sub_Class(T value) : data{value} {}
	~Sub_Class() {}

	void Set_Data(T value)
	{
		this->data = value;
	}

	T Get_Data() const
	{
		return this->data;
	}
};

int main()
{
	Sub_Class<int> sub_Class(0);
	std::cout << "Data Value: " << sub_Class.Get_Data() << '\n';

	sub_Class.Set_Data(20);
	std::cout << "Data Value: " << sub_Class.Get_Data() << '\n';
}