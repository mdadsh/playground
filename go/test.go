package main

//import "math"

func FindThreeLargestNumbers(array []int) []int {
	//largestNumbers := []int{math.MinInt32, math.MinInt32, math.MinInt32}
	largestNumbers := []int{0, 0, 0}
	for index := 0; index < len(array); index++ {
		updateLargestNums(largestNumbers, array[index])
	}
	return largestNumbers
}

func updateLargestNums(array []int, num int) {
	if array[2] < num {
		updateShift(array, num, 2)
	} else if array[1] < num {
		updateShift(array, num, 1)
	} else if array[0] < num {
		updateShift(array, num, 0)
	}
}

func updateShift(array []int, num int, index int) {
	for location := 0; location < index+1; location++ {
		if location == index {
			array[location] = num
		} else {
			array[location] = array[location+1]
		}
	}
}
