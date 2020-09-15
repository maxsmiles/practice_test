package main

import (
	"fmt"
)

func main() {
	var a, b int
	fmt.Scanf("%d %d", &a, &b)
	c := (a*10 + b) / 19
	fmt.Println(c)
}
