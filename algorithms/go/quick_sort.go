package algorithms

func Partition(slice []int, start int, end int) int {
	median := start
	pivot := slice[start]

	for i := start; i < end; i++ {
		median++

		if slice[i] < pivot {
			temp1 := slice[i]
			temp2 := slice[median]

			slice[i] = temp2
			slice[median] = temp1
		}
	}

	temp1 := slice[start]
	temp2 := slice[median]

	slice[start] = temp2
	slice[median] = temp1

	return median
}

func QuickSort(slice []int, start int, end int) {
	if start < end {
		pivot := Partition(slice, start, end)

		QuickSort(slice, start, pivot - 1)
		QuickSort(slice, pivot + 1, end)
	}
}