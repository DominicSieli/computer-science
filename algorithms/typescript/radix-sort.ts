function radixSort(array: number[])
{
	if(array.length === 0) return [];

	const maxNumber = Math.max(...array);
	const maxDigits = Math.floor(Math.log10(maxNumber)) + 1;

	for(let place = 0; place < maxDigits; place++)
	{
		const buckets = Array.from({ length: 10 }, (): number[] => []);

		for(let number of array)
		{
			const digit = Math.floor(number / Math.pow(10, place)) % 10;
			buckets[digit].push(number);
		}

		array = [].concat(...buckets);
	}

	return array;
}