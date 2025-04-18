package algorithms

func BinarySearch(slice []int, target int) int {
	left := 0
	median := 0
	right := len(slice) - 1

	if(target < slice[left] || target > slice[right]) {
		return -1
	}

	for left <= right {
		median = left + (right - left) / 2

		if(slice[left] == target) {
			return left
		}

		if(slice[right] == target) {
			return right
		}

		if(slice[median] == target) {
			return median
		}

		if(slice[median] < target) {
			left = median + 1
		}

		if(slice[median] > target) {
			right = median - 1
		}
	}

	return -1
}