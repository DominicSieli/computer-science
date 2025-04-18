package algorithms

func CrossSort(slice []int) {
	if(len(slice) < 2) {
		return
	}

	l := 0
	r := 0
	left := 0
	right := len(slice) - 1

	for left < right {
		if slice[left] > slice[right] {
			temp1 := slice[left]
			temp2 := slice[right]

			slice[left] = temp2
			slice[right] = temp1
		}

		l = left
		r = right

		for l < right {
			if slice[l] > slice[l + 1] {
				temp1 := slice[l]
				temp2 := slice[l + 1]

				slice[l] = temp2
				slice[l + 1] = temp1
			}

			if slice[r] < slice[r - 1] {
				temp1 := slice[r]
				temp2 := slice[r - 1]

				slice[r] = temp2
				slice[r - 1] = temp1
			}

			l++
			r--
		}

		left++
		right--
	}
}