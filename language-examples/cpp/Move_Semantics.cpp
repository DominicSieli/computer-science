#include <iostream>

template<typename T>
class Array
{
private:
	T* array = nullptr;
	unsigned int n = 0;

public:
	Array(const unsigned int& n) : array{new T[n]}, n{n} {}

	Array(const Array& copy_class) : array{new T[copy_class.n]}, n{copy_class.n}
	{
		std::cout << "Array Copied" << '\n';
		for(unsigned int i = 0; i < this->n; i++) this->array[i] = copy_class.array[i];
	}

	Array(Array&& move_class) noexcept : array{std::move(move_class.array)}, n{move_class.n}
	{
		move_class.n = 0;
		move_class.array = nullptr;
		std::cout << "Array Moved" << '\n';
	}

	~Array()
	{
		delete array;
	}

	T& operator[](const unsigned int& index)
	{
		return this->array[index];
	}

	unsigned int Size() const noexcept
	{
		return this->n;
	}
};

int main()
{
	Array<int> array_1(10);

	for(unsigned int i = 0; i < array_1.Size(); i++)
	{
		array_1[i] = i;
	}

	Array<int> array_2(array_1);
	//Array<int> array_2(std::move(array_1));

	std::cout << '\n';

	for(unsigned int i = 0; i < array_1.Size(); i++)
	{
		std::cout << "Array_1: " << array_1[i] << '\n';
	}

	std::cout << '\n';

	for(unsigned int i = 0; i < array_2.Size(); i++)
	{
		std::cout << "Array_2: " << array_2[i] << '\n';
	}
}