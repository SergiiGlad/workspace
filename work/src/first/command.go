package main

import (
	"log"
	"net"
	"os/exec"
)

func main() {

	// sen two pings and send output to STDOUT

	out1, err := exec.Command("ping", "-c", "2", "8.8.8.3").Output()

	out2, err := exec.Command("date").Output()

	if err != nil {
		log.Printf("log.Print : %s\n", err)
		log.Fatal(err)
	}

	log.Printf("There are results date: %s ---> %s\n", out2, out1)

	str1, err := net.LookupHost("pib.com.ua")

	log.Printf(" pib.com.ua resolves ip: %s ", str1)

}
