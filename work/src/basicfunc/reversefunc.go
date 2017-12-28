package basicfunc

func Reverse(s string) string {

	b := []rune(s)

	for i := 0; i < len(b)/2; i++ {

		j := len(b) - i - 1
		b[i], b[j] = b[j], b[i]
	}

	return string(b)

}

func ReverseMethodSecond(s string) string {

	b := []rune(s)

	n := len(b) - 1

	for j := (n - 1) >> 1; j >= 0; j-- {

		k := n - j
		b[j], b[k] = b[k], b[j]
	}

	return string(b)
}

func EqualsByChar(s1, s2 string) bool {

	if &s1 == &s2 {
		return true
	}

	if len(s1) != len(s2) {
		return false
	}

	n := len(s1)

	i := 0

	for n != 0 {

		if s1[i] != s2[i] {
			return false
		}
		i++
		n--
	}

	return true
}
