package main

import (
    "fmt"
    "os"
    "runtime"

)


func main() {

    args1 := os.Args // with name programm
    args2 :=  os.Args[1:]  // slice without name of programm

    fmt.Println( args1 )
    fmt.Println( args2 )

    if len( args1) > 0  {
        fmt.Println( "args1 index 0 : ", args1[0] )
    }

    if len( args2 ) > 0  {
    fmt.Println( "args2 index 0 : ", args2[0] )
    }

    fmt.Println( len( args1) )
    fmt.Println( len( args2) )

    fmt.Print( runtime.GOOS )
}