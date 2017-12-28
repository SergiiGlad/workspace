package main

import (
	"fmt"
	"os"
	"strings"
)

func main() {

	if args := os.Args[1:]; len(args) > 0 {

		take(args[0])

	} else {

		take("Tod Pike")
	}

	arr := []int{1, 2, 3, 4}

	fmt.Println("Sum", arr, " = ", sum(arr))

	fmt.Println("Multiply", arr, " = ", multiply(arr))

	fmt.Println(Revers("happy new year"))

	var pol = "Radar"

	fmt.Printf("Word %s is polindrom ", pol)
	fmt.Println(isPalindrome(pol))

	pol = "radar"

	fmt.Printf("Word %s is polindrom ", pol)
	fmt.Println(isPalindrome(pol))

	pol = "arra"

	fmt.Printf("Word %s is polindrom ", pol)
	fmt.Println(isPalindromeCompare(pol))

	array_b := []byte{5, 8, 9, 4, 7}

	histogramPrint(array_b)

	in := "AZabcdef..xyz"

	fmt.Println(in)

	out := caesarCipher(in, 3)

	fmt.Println(out)

	in = caesarDeCipher(out, 3)

	fmt.Println(in)

	// training.local
}

func take(s string) {

	fmt.Printf("Hello, %q \n", s)
}

func sum(array1 []int) int {

	sum := 0

	i := len(array1)

	for i > 0 {
		fmt.Printf("doing %d\n", i)
		sum = sum + array1[i-1]
		i--
	}

	return sum
}

func multiply(array2 []int) int {

	multi := 1

	for i := len(array2); i > 0; i-- {

		multi = multi * array2[i-1]

	}

	return multi

}

func Revers(s string) string {

	b := []rune(s)

	for i := 0; i < len(b)/2; i++ {
		j := len(b) - i - 1
		b[i], b[j] = b[j], b[i]
	}

	return string(b)
}

func isPalindrome(s string) bool {

	s2 := Revers(s)

	for len(s) != len(s2) {
		return false
	}

	for i := 0; i < len(s); i++ {
		for s[i] != s2[i] {
			return false
		}
	}

	return true

}

func isPalindromeCompare(s string) bool {

	result := strings.Compare(s, Revers(s))

	for result == 0 {
		return true
	}

	return false

}

func histogramPrint(array []byte) {

	for i := 0; i < len(array); i++ {
		fmt.Println(PrintSymbolString(int(array[i])))
	}

}

func PrintSymbolString(count int) string {

	var str string
	for i := 0; i < count; i++ {
		str = str + "*"
	}

	return str
}

func caesarCipher(s string, shift byte) string {

	var result string

	for i := 0; i < len(s); i++ {

		sym := rune(s[i])

		if sym <= rune('Z') && sym >= rune('A') {

			sym = sym + rune(shift)

			if sym > 'Z' {
				sym = 'A' + sym - 'Z' - 1
			}

		}

		if sym <= rune('z') && sym >= rune('a') {
			sym = sym + rune(shift)

			if sym > 'z' {
				sym = 'a' + sym - 'z' - 1
			}
		}

		result = result + string(sym)

	} //for

	return result

}

func caesarDeCipher(s string, shift byte) string {

	var result string

	for i := 0; i < len(s); i++ {

		sym := rune(s[i])

		if sym <= rune('Z') && sym >= rune('A') {

			sym = sym - rune(shift)

			if sym < 'A' {
				sym = 'Z' - 'A' - sym + 1
			}

		}

		if sym <= rune('z') && sym >= rune('a') {
			sym = sym - rune(shift)

			if sym < 'a' {
				sym = sym
			}
		}

		result = result + string(sym)

	} //for

	return result

}
