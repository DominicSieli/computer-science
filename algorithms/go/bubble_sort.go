package algorithms

func BubbleSort(slice []int) {
	sorted := false

	if(len(slice) < 2) {
		return
	}

	for sorted == false {
		sorted = true

		for i := 0; i < len(slice) - 1; i++ {
			if slice[i] > slice[i + 1] {
				sorted = false

				temp1 := slice[i]
				temp2 := slice[i + 1]

				slice[i] = temp2
				slice[i + 1] = temp1
			}
		}
	}
}