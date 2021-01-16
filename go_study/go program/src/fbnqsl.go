package main

import (
	"fmt"
)

func main() {
	var a int
	fmt.Scanf("%d", &a)
	x, y := 0, 1
	for i := 0; i < a; i++ {
		x, y = y, x+y

	}
	fmt.Printf("%d\n", x)
}
