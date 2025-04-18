package algorithms

func RadixSort(slice []int) {
	maxValue := slice[0]

	for _, value := range slice {
		if value > maxValue {
			maxValue = value
		}
	}

	for exp := 1; maxValue/exp > 0; exp *= 10 {
		count := make([]int, 10)
		sortedSlice := make([]int, len(slice))

		for i := 0; i < len(slice); i++ {
			digit := (slice[i] / exp) % 10
			count[digit]++
		}

		for i := 1; i < 10; i++ {
			count[i] += count[i-1]
		}

		for i := len(slice) - 1; i >= 0; i-- {
			digit := (slice[i] / exp) % 10
			sortedSlice[count[digit]-1] = slice[i]
			count[digit]--
		}

		for i := 0; i < len(slice); i++ {
			slice[i] = sortedSlice[i]
		}
	}
}