#include <vector>
#include <iostream>

static int RemoveDuplicates(std::vector<int>& array)
{
	int c = 0;
	int k = array.size();

	for(int i = 0; i < array.size(); i++)
	{
		if(i != c && array[i] == array[c]) k--;

		if(array[i] > array[c])
		{
			c++;
			array[c] = array[i];
		}
	}

	return k;
}

int main()
{
	std::vector<int> array = {1,1,1,1,2,2,2,2,3,3};

	int k = RemoveDuplicates(array);

	for(int i = 0; i < k; i++)
	{
		std::cout << array[i] << "\n";
	}
}
