package main

import "fmt"

func main() {

    str := "coolstring"

    fmt.Print( str[0] )

    var p *string

    p = &str


    fmt.Print( *p[0] )

}