package main

import (
    "fmt"
    "log"
    "net"
    )


    func main() {

        ip := "docker.io"
        ip2, _ := dnsLookup( ip )

        fmt.Printf(" %s resolves to -------> %s \n", ip, ip2 )

        l33t := "BadHostN@m.C0m"
        dnsr1 , _ := dnsLookup( l33t )

        fmt.Printf(" %s resolves to -------> %s \n", l33t, dnsr1 )

        addr1, _ := net.LookupAddr( "67.67.1.1" )

        log.Printf( "net.LookupAddr( \"8.6.8.9\" ) result %s", addr1 )

        addr2, _ := net.ResolveIPAddr( "ip", "pib.com.ua" )



        log.Printf( "pointer %p", addr2 )

        var strAdd net.IPAddr

        strAdd = *addr2

        log.Printf( "value %s", strAdd.Zone )

    }


    func dnsLookup( ipStr string) ( string, error) {

        ipAddr, err := net.ResolveIPAddr ( "ip", ipStr)

        if err != nil {
            log.Println( err )

        }


        return ipAddr.String(), err
    }