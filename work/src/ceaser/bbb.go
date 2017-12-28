package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
)

func main() {

	str := []string{"5"}

	var v rune

	if v, err := strconv.Atoi(str[0]); err == nil {
		fmt.Printf("%T, %v\n", v, v)
	}

	fmt.Printf("%T, %v\n", v, v)

	var abc = 3

	if abc := 1; 1 == 1 {

		fmt.Println(abc)

	}

	fmt.Println(abc)

	fmt.Printf("test \\r \r\r\r\r\r\n")
	fmt.Print("prev line ending \\n")

	var text string
	for {

		fmt.Println("Caught text which to crypt:")
		text = ReadString()
		if len(text) != 0 {
			break
		}

	}

	fmt.Printf("%q, length = %d", text, len(text))

	if n := 1; n == 1 {
		fmt.Print(n)
	}

	n := 2

	fmt.Print(n)

}

func ReadString() string {

	reader := bufio.NewReader(os.Stdin)

	text, _ := reader.ReadString('c')

	// convert CRLF to LF

	text = strings.Replace(text, "\n", "", -1)

	return text
}
