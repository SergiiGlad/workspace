package main

import (
	"fmt"
)

const Max_int = 65536
const Kilo = 1024
const Mega = 1024 * 1024

func main() {

	// source matrix
	matrix := [][]int{{1, 2, 3, 4, 5},
		{1, 2, 3, 4, 5},
		{1, 2, 3, 4, 5},
		{1, 2, 3, 4, 5},
	}

	// var newMatrix []int = make([]int, Max_int)

	// var newMatrix = make([]int, Max_int)

	newMatrix := make([][]int, Max_int)

	for i := 0; i < Max_int; i++ {

		newMatrix[i] = make([]int, Max_int)

	}

	fmt.Println(len(matrix))
	fmt.Println(len(matrix[0]))
	fmt.Printf(" size newMatrix %dK\n ", len(newMatrix)/Kilo)
	fmt.Println(0xFFFF * Max_int)
	fmt.Printf("Type newMatrix %T\n ", newMatrix)
	fmt.Printf("Type newMatrix %v\n ", newMatrix[0])
	fmt.Println(len(newMatrix))
	fmt.Println(len(newMatrix[0]))

	var p *[][]int

	p = &newMatrix

	fmt.Print(p)

}

func Matrix_Revers(matrix [][]int) {
	//
}

/*
func InitMatrix(p *[][]int) {

	for i := 0; i < len(*p[0]); i++ {
		*p[0][i] = i
	}
}
*/
