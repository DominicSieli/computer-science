package algorithms

func SelectionSort(slice []int) {
	min := 0

	for i := 0; i < len(slice); i++ {
		min = i

		for j := i + 1; j < len(slice); j++ {
			if slice[j] < slice[min] {
				min = j;
			}
		}

		temp1 := slice[i]
		temp2 := slice[min]

		slice[i] = temp2
		slice[min] = temp1
	}
}