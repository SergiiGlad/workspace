package main

import (
	"fmt"
)

func main() {

	// source matrix

	matrix := [][]int{
		{1, 2, 3, 4, 5, 6, 7, 8},
		{1, 2, 3, 4, 5, 6, 7},
		{1, 2, 3, 4, 5, 6},
		{1, 2, 3, 4, 5},
		{1, 2, 3, 4 },
		{1, 2, 3 },
		{1, 2 },

	}

	// dest 8 x 7
	fmt.Print( cap(matrix) )
	fmt.Print( len(matrix) )

	dest := make ( []int , len( matrix ) )

	copy( dest[0:], matrix[0][0:1] )
	copy( dest[1:], matrix[1][0:1] )
	copy( dest[2:], matrix[2][0:1] )

	fmt.Print( dest )

}

