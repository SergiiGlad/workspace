package main



import "fmt"

func main() {

    arr1 := []int{0,1}

    new_m := []int{4,4}

    arr1 = new_m

    fmt.Printf("arr1 Init arr1 :\n %T %v\n", arr1, arr1 )

    func1( arr1 )

    fmt.Printf("arr1 After func1 :\n %T %v\n", arr1, arr1 )

    var arr2 [2]int

    fmt.Printf("arr2 Init arr2: \n %T %v\n", arr2, arr2 )

    func2( arr2 )

    fmt.Printf("arr2 after func2: \n %T %v\n", arr2, arr2 )

    fmt.Printf("arr1 After func1 :\n %T %v\n", arr1, arr1 )

    func3( &arr1 )

    fmt.Printf("arr1 After func3 :\n %T %v\n", arr1, arr1 )

    func5( &arr1 )



    fmt.Printf("arr1 After func5 :\n %T %v\n", arr1, arr1 )

    func6( &arr1 )

    fmt.Printf("arr1 After func6 :\n %T %v\n", arr1, arr1 )

    arr7 := [5]int{}

    fmt.Printf("arr7 :\n %T %v\n", arr7, arr7 )

    func7( &arr7 )

    fmt.Printf("arr7 After func7 :\n %T %v\n", arr7, arr7 )


}


func func1( m []int ) {

    m[0] = 1

}

func func2( m [2]int ) {

    m[0] = 1

}

func func3( m *[]int ) {

    new_m := [4]int{3,3,3,3}

    fmt.Printf("new_m :\n %T %v\n", new_m, new_m )
    fmt.Printf("m :\n %T %v\n", *m, *m )

   // m = &new_m

  //  *m = new_m // or

   copy ( *m, new_m[0:] )
    fmt.Printf("m after copy :\n %T %v\n", *m, *m )

}

func func5 ( m *[]int ) {

    var a [10]int

    a[0] = 5
    a[1] = 5
    a[2] = 5


    copy ( *m , a[0:3])

}

func func6 ( m *[]int ) {

    a := []int{6,6,6,6,6}


    *m = a




}

func func7 ( m *[5]int ) {

    a := [5]int{7,7,7,7,7}


    *m = a


}