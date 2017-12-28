package main

import (

    "fmt"
    "time"
    )


const K = 1024
const M = K*K
const G = 50*M

    func main() {

    var  m [G]int

    // проверяем скорость работы конструкции range
    fmt.Println( "проверяем скорость работы конструкции range")
    fmt.Println( m[0:5] )

    t1 := time.Now()
    for key, _ := range m {
        m[key] = key
    }
    t2:= time.Now()

    fmt.Println( t2.Sub(t1))
    fmt.Println( m[G-1:G] )

    // проверяем скорость работы индексом
    fmt.Println( "проверяем скорость работы индексом")
    fmt.Println( m[0:5] )

    t1 = time.Now()
    for i := G-1; i > 0; i-- {
        m[i] = i
    }

    t2 = time.Now()
    fmt.Println( t2.Sub(t1))
    fmt.Println( m[G-1:G] )

    // проверяем скорость работы copy
    fmt.Println( "проверяем скорость работы copy")
    d := make([]int, G)

    fmt.Println( d[0:5] )

    t1 = time.Now()
    copy ( d, m[0:])
    t2 = time.Now()
    fmt.Println( t2.Sub(t1))
    fmt.Println( d[G-1:G] )

    // проверяем скорость работы присваивани
    fmt.Println( "проверяем скорость работы присваивани")

    var n [G]int

    fmt.Println( n[0:5] )

    t1 = time.Now()

    n = m
    t2 = time.Now()
    fmt.Println( t2.Sub(t1))
    fmt.Println( n[G-1:G] )


    // проверяем скорость работы присваиванием значений массива
    fmt.Println( "проверяем скорость работы присваиванием идексом")

    fmt.Println( d[0:5] )

    t1 = time.Now()
    for i := 0; i < G; i++ {
        d[i] = m[i]
    }

    t2 = time.Now()
    fmt.Println( t2.Sub(t1))
    fmt.Println( d[G-1:G] )



    // Передаем копию массива в функцию
    fmt.Println("Calling function with array and copying array")
    t1 = time.Now()
    array( m )
    t2 = time.Now()
    fmt.Println( "Hola, comeback")
    fmt.Println( t2.Sub(t1) )
    fmt.Println( m[G-1:G] )

    // Передаем только слайс в функцию
    fmt.Println("Calling function with slice ")
    t1 = time.Now()
    slice( m[0:] )
    t2 = time.Now()
    fmt.Println( "Comeback from slice")
    fmt.Println( t2.Sub(t1) )
    fmt.Println( m[G-1:G] )



    }


    func array( a [G]int ) {

        a[G-1] = 0
    }

    func slice ( a []int) {

        a[G-1] = 1111111

    }