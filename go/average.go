package main

import "fmt"

func average(a, b float32) float32 {
	return a + b/2
}

func main() {
	fmt.Println(average(2, 1))
}
