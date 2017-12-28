package main

import (
	"fmt"
)

func main() {

	// source matrix

	matrix := [][]int{
		{1, 2, 3, 4, 5, 6},
		{1, 2, 3, 4, 5, 6},
		{1, 2, 3, 4, 5, 6},
	}

	fmt.Println(matrix)

	matrix = ReverseMatrix(matrix)

	fmt.Println(matrix)

}

func ReverseMatrix(p [][]int) (foo [][]int) {

	lenRows := len(p)
	lenColms := len(p[0])

	// Allocate the top-level slice for new matrix
	foo = make([][]int, lenColms)
	for i := range foo {
		foo[i] = make([]int, lenRows)
	}

	for i := 0; i < lenColms; i++ {
		for j := 0; j < lenRows; j++ {
			foo[i][j] = p[j][i]

		}
	}

	return
}
