function crossSort(array)
{
	let j = 0;
	let left = 0;
	let right = array.length - 1;
	let sorted = false;

	while(sorted == false)
	{
		sorted = true;

		for(let i = left; i < right; i++)
		{
			j = (array.length - i) - 1;

			if(i < j && array[i] > array[j])
			{
				sorted = false;
				let a = array[i];
				let b = array[j];
				array[i] = b;
				array[j] = a;
			}

			if(array[i] > array[i + 1])
			{
				sorted = false;
				let a = array[i];
				let b = array[i + 1];
				array[i] = b;
				array[i + 1] = a;
			}

			if(array[j] < array[j - 1])
			{
				sorted = false;
				let a = array[j];
				let b = array[j - 1];
				array[j] = b;
				array[j - 1] = a;
			}
		}

		left++;
		right--;
	}

	return array;
}