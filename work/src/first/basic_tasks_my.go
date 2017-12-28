package main

import (
	"basicfunc"
	"fmt"
)

func main() {

	var s1, s2 string

	hello := "Hello"
	//  lo := "lo"

	fmt.Println(s1 == s2)
	fmt.Print("Length empty string ")
	fmt.Println(len(s1))
	fmt.Println(hello == "Hello")
	fmt.Println(hello == ("Hel" + "lo"))

	s3 := `\r
\v`

	fmt.Print("String \\n ")
	fmt.Print(len(s3))
	fmt.Println(s3)

	fmt.Println(basicfunc.Reverse("Hello, new gopher"))

	fmt.Println(basicfunc.ReverseMethodSecond("rehpog wen ,olleH"))

	fmt.Println(basicfunc.EqualsByChar("radar", "radar"))

}
