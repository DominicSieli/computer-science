function insertionSort(array: number[])
{
	for(let i = 0; i < array.length; i++)
	{
		let j = 0;
		let key = array[i];

		for(j = i - 1; j >= 0; j--)
		{
			if(array[j] > key) array[j + 1] = array[j];
			else break;
		}

		array[j + 1] = key;
	}

	return array;
}