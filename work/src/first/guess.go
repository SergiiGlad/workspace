package main

import (

    "basicfunc"
    "fmt"
    "math/rand"
    "time"

)

func main() {




    var (
        k,v int //start and end value of range
        err error
        )

    if k, err = basicfunc.ReadInt("Start value"); err != nil {
        fmt.Errorf("%T, %v\n", k, k)
        fmt.Println(" key shoud be number")
        return
    }

    if v, err = basicfunc.ReadInt("End value"); err != nil {
        fmt.Errorf("%T, %v\n", v, v)
        fmt.Println(" key shoud be number")
        return
    }


    if k >= v {
        fmt.Print("Ending valur should be more than starting")
        return
    }


    r := rand.New( rand.NewSource( time.Now().UnixNano() ))

    shadow := int64(k) + r.Int63n( int64( v - k ))

    fmt.Printf("You should guess value from %d to %d\n", k, v)

    for {



        if  guessResult, exit := game( shadow ); exit == true {

          fmt.Println("You went out from game!")
          break


        } else {
            if guessResult > 0 {
                fmt.Println("Try again! or enter 0. You've entered more value")
            }
            if guessResult < 0 {
                fmt.Println("Try again! or enter 0. You've entered less value")
            }
            if guessResult == 0 {
                fmt.Println("Gongratulate. You've guessed")
                break
            }

        }


    }


    fmt.Println("Gameover. That's all.")
}

func game(   shadowValue int64) ( result int64, exit bool ) {

    var  (
        err error
        r int
    )

    if r, err = basicfunc.ReadInt("Guess value"); err != nil {
         fmt.Errorf("%T, %v\n", r, r)
        fmt.Println(" key shoud be number")
        return
    }

    if r == 0 {
        return 0, true
    }

    return int64(r) - shadowValue, false

}

