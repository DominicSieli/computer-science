#include <iostream>

double d = 10.50;
int i = (int)d;
char c = (char)i;
const int CONST = 5;

int *static_cast_pointer = static_cast<int*>(&i);
int *reinterpret_cast_pointer = reinterpret_cast<int*>(&c);
int *const_cast_pointer = const_cast<int*>(&CONST);

class BaseClass
{
	public:
		virtual void test() {}
};

class SubClass : public BaseClass
{};

int main()
{
	SubClass *sub_class = new SubClass();
	BaseClass *base_class = dynamic_cast<BaseClass*>(sub_class);

	std::cout << &base_class << '\n';
}