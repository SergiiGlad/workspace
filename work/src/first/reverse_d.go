package main

import (
	"fmt"
)

func main() {

	// source matrix
	matrix := [][]int{{1, 2, 3, 4, 5, 6, 7, 8},
		{1, 2, 3, 4, 5},
		{1, 2, 3, 4, 5},
		{1, 2, 3, 4, 5},
	}

}

func Matrix_Revers(matrix [][]int) {
	//

	matrix[0][0] = 0

	fmt.Println(&matrix)

	p := &matrix

	fmt.Println(&p)
}

func Sum(a *[]int) (sum int) {

	fmt.Println("length")
	fmt.Println(len(*a))
	for _, v := range *a {
		sum += v

	}

	return
}
