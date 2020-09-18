//选择排序
//author:zhanghongyuan
package main

import "fmt"

func main() {
	var a = []int{3, 5, 7, 2, 0, 1, 9}
	var temp int = 0 //开辟一个临时空间，存放交换的中间值
	var minIndex, minValue int
	for i := 0; i < len(a)-1; i++ {
		minIndex = i
		minValue = a[minIndex]
		for j := i + 1; j < len(a); j++ {
			if a[j] < minValue {
				minIndex = j
				minValue = a[minIndex]
			}
		}
		temp = a[i]
		a[i] = minValue
		a[minIndex] = temp

	}
	fmt.Println(a)
}
