package main

import "fmt"

type Char byte

func main() {
	fmt.Printf("privertt\n")

	abc1 := [10]Char{'g', 'd', 'k', 'l', 'n', 'o', 'a', 'r', 'd', 'w'}

	// abc2 := [10]Char{'g','d','k','l','n','o','a','r','d','w'}

	for i := 0; i < len(abc1); i++ {
		fmt.Printf("%c ", abc1[i])
	}
}
