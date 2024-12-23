function binarySearch(array, target)
{
	let left = 0;
	let median = 0;
	let right = array.length - 1;

	while(left <= right)
	{
		median = Math.floor(left + (right - left) / 2);

		if(target == array[median]) return median;
		if(target > array[median]) left = median + 1;
		if(target < array[median]) right = median - 1;
	}

	return -1;
}