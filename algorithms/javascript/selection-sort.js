function selectionSort(array)
{
	let min = 0;

	for(let i = 0; i < array.length; i++)
	{
		min = i;

		for(let j = i + 1; j < array.length; j++)
		{
			if(array[j] < array[min]) min = j;
		}

		let temp = array[i];
		array[i] = array[min];
		array[min] = temp;
	}

	return array;
}