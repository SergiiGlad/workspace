package main

import (

    "net"
    "fmt"
)

func main() {

    var ip1 net.IP

    ip2 := net.ParseIP("10.2.2.2")
    ip3 := net.ParseIP("172.16.18.0")
    ip4 := net.ParseIP("192.168.100.100")

    fmt.Println( ip1.DefaultMask() )
    fmt.Println( ip2.DefaultMask() )
    fmt.Println( ip3.DefaultMask() )
    fmt.Printf( "Дефаулт маска используется %s", ip4.DefaultMask() )
    fmt.Println ( ip4.String() )


}