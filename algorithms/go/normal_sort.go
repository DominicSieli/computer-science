package algorithms

func NormalSort(slice []int) {
	if(len(slice) < 2) {
		return
	}

	min := slice[0]
	max := slice[0]
	sortedSlice := make([]int, len(slice))

	for i := 0; i < len(slice); i++ {
		if(slice[i] < min) {
			min = slice[i]
		}

		if(slice[i] > max) {
			max = slice[i]
		}
	}

	for i := 0; i < len(slice); i++ {
		index := int((float64(slice[i] - min) / float64(max - min)) * float64(len(slice) - 1));
		sortedSlice[index] = slice[i]
	}

	copy(slice, sortedSlice)
}