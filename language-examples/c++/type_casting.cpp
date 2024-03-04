#include <iostream>

double d = 10.50;
int i = (int)d;
char c = (char)i;
const int CONST = 5;

int *staticCastPtr = static_cast<int*>(&i);
int *reinterpretCastPtr = reinterpret_cast<int*>(&c);
int *constCastPtr = const_cast<int*>(&CONST);

class BaseClass
{
public:
	virtual void test() {}
};

class SubClass : public BaseClass
{};

int main()
{
	SubClass *subClass = new SubClass();
	BaseClass *baseClass = dynamic_cast<BaseClass*>(subClass);

	std::cout << &baseClass << '\n';
}