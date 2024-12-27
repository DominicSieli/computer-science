function merge(array: number[], start: number, median: number, end: number)
{
	let index = 0;
	let left = start;
	let right = median + 1;
	let size = (end - start) + 1;
	let segment = new Array(size).fill(0);

	while(left <= median && right <= end)
	{
		if(array[left] < array[right]) segment[index++] = array[left++];
		else segment[index++] = array[right++];
	}

	while(left <= median)
	{
		segment[index++] = array[left++];
	}

	while(right <= end)
	{
		segment[index++] = array[right++];
	}

	for(let i = 0; i < size; i++)
	{
		array[start + i] = segment[i];
	}
}

function mergeSort(array: number[], start: number, end: number)
{
	if(start < end)
	{
		let median = Math.floor((start + end) / 2);

		mergeSort(array, start, median);
		mergeSort(array, median + 1, end);
		merge(array, start, median, end);
	}

	return array;
}