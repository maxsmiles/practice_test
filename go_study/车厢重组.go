//未实现
package main

import "fmt"

func main() {
	var n, j int
	fmt.Scanf("%d\n", &n)
	fmt.Printf("n is %d", n)
	fmt.Scanf()
	for i := 0; i < n; i++ {
		fmt.Scanf("%d", &j)
		fmt.Printf("j is %d", j)
	}
}
