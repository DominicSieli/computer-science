package algorithms

func CountingSort(slice []int) {
	min := slice[0]
	max := slice[0]

	for i := 0; i < len(slice); i++ {
		if slice[i] > max {
			max = slice[i]
		}

		if slice[i] < min {
			min = slice[i]
		}
	}

	section := (max - min) + 1
	count := make([]int, section)
	sortedSlice := make([]int, len(slice))

	for i := 0; i < len(slice); i++ {
		count[slice[i] - min]++
	}

	for i := 1; i < len(count); i++ {
		count[i] += count[i - 1]
	}

	for i := len(slice) - 1; i >= 0; i-- {
		sortedSlice[count[slice[i] - min] - 1] = slice[i]
		count[slice[i] - min]--
	}

	copy(slice, sortedSlice)
}