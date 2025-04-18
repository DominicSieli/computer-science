package algorithms

func InsertionSort(slice []int) {
	for i := 1; i < len(slice); i++ {
		j := i - 1
		key := slice[i]

		for j >= 0 && slice[j] > key {
			slice[j + 1] = slice[j]
			j--
		}

		slice[j + 1] = key
	}
}