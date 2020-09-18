package main

import "fmt"

func main() {
	var a, b, count int
	fmt.Scanf("%d %d", &a, &b)
	for i := a; i <= b; i++ {
		//fmt.Println(i)
		for n := i; n != 0; n /= 10 {
			if n%10 == 2 {
				count += 1

			} else {
				count += 0
			}
		}
	}
	fmt.Println(count)
}
