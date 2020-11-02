package main

import (
	"example"
	"fmt"
)

//main this is the main progress
func main() {
	s := example.LoadConfig(5, 6)
	fmt.Println("this is main pkg")
	fmt.Printf("%d\n", s)
}
