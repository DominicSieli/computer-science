package algorithms

func Merge(slice []int, start int, median int, end int) {
	index := 0
	left := start
	right := median + 1
	size := (end - start) + 1

	segment := make([]int, size)

	for left <= median && right <= end {
		if slice[left] <= slice[right] {
			segment[index] = slice[left]
			left++
			index++
		} else {
			segment[index] = slice[right]
			right++
			index++
		}
	}

	for left <= median {
		segment[index] = slice[left]
		left++
		index++
	}

	for right <= end {
		segment[index] = slice[right]
		right++
		index++
	}

	for i := 0; i < size; i++ {
		slice[start + i] = segment[i]
	}
}

func MergeSort(slice []int, start int, end int) {
	if start < end {
		median := (start + end) / 2

		MergeSort(slice, start, median)
		MergeSort(slice, median + 1, end)
		Merge(slice, start, median, end)
	}
}