function bubbleSort(array: number[])
{
	let sorted: boolean = false;

	while(sorted == false)
	{
		sorted = true;

		for(let i = 0; i < array.length - 1; i++)
		{
			if(array[i] > array[i + 1])
			{
				sorted = false;

				let temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
			}
		}
	}

	return array;
}