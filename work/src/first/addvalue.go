package main

import "fmt"

func addValue(mas []int) {

	fmt.Print(mas)
	mas[0] = 0
	mas = append(mas, 3)
	mas[0] = 3

	s1 := "Hello"
	s2 := "He"
	// s3 := "llo"

	s2 = s2 + "llo"

	fmt.Print(s1 == s2)
}

func main() {

	arr := []int{1, 2}

	fmt.Print(arr)

	addValue(arr[:])

	fmt.Print(arr)

	c := make([]int, 3)

	//	copy(c, arr)

	c = arr

	arr = append(c, 3)

	fmt.Print(c)
	fmt.Print(arr)

}
