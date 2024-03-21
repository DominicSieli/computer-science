const int predicate = 20;

int main()
{
	static_assert(predicate >= 20,"Predicate must equal at least 20");
}