function partition(array: number[], start: number, end: number)
{
	let pivot = array[start];
	let median = start;

	for(let i = start + 1; i <= end; i++)
	{
		if(array[i] < pivot)
		{
			median++;
			let a = array[i];
			let b = array[median];
			array[i] = b;
			array[median] = a;
		}
	}

	let x = array[start];
	let y = array[median];
	array[start] = y;
	array[median] = x;

	return median;
}

function quickSort(array: number[], start: number, end: number)
{
	if(start < end)
	{
		let pivot = partition(array, start, end);

		quickSort(array, start, pivot - 1);
		quickSort(array, pivot + 1, end);
	}

	return array;
}