#include <iostream>

template<typename T>
class AbstractBaseClass
{
	public:
		virtual ~AbstractBaseClass() {}
		virtual void SetData(T) = 0;
		virtual T GetData() const = 0;
};

template<typename T>
class SubClass : public AbstractBaseClass<T>
{
	private:
		T data;

	public:
		SubClass(T value) : data{value} {}
		~SubClass() {}

		void SetData(T value)
		{
			data = value;
		}

		T GetData() const
		{
			return data;
		}
};

int main()
{
	SubClass<int> sub_class(0);
	std::cout << "Data Value: " << sub_class.GetData() << '\n';

	sub_class.SetData(20);
	std::cout << "Data Value: " << sub_class.GetData() << '\n';
}