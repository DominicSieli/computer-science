function countingSort(array)
{
	let min = Math.min(...array);
	let max = Math.max(...array);
	let range = (max - min) + 1;
	let count = new Array(range).fill(0);
	let sortedArray = new Array(array.length).fill(0);

	for(let i = 0; i < array.length; i++) count[array[i] - min]++;
	for(let i = 1; i < count.length; i++) count[i] += count[i - 1];

	for(let i = array.length - 1; i >= 0; i--)
	{
		sortedArray[count[array[i] - min] - 1] = array[i];
		count[array[i] - min]--;
	}

	for(let i = 0; i < array.length; i++)
	{
		array[i] = sortedArray[i];
	}

	return sortedArray;
}