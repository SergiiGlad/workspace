package main

import "fmt"

func main () {


    fmt.Printf( "%b\n", 13 )
    fmt.Printf( "%b\n", 13 >> 3 )

    printBinaryform( 13 )
}


func printBinaryform( number int ) {



        if (number <= 1) {
            fmt.Print(number);
            return;   // Kick out of the recursion
        }

        remainder := number % 2;
        printBinaryform(number >> 1);
       fmt.Print(remainder);

    }