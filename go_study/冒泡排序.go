//@author zhanghongyuan
//Bubble Sort 常规版
//冒泡排序 常规版
package main

import (
	"fmt"
)

func main() {
	var a = []int{3, 5, 7, 2}
	var temp int = 0 //开辟一个临时空间，存放交换的中间值
	//要遍历的次数
	for i := 0; i < len(a)-1; i++ {
		fmt.Printf("第 %d 遍：\n", i+1)
		//依次比较相邻两个数的大小，遍历一次后，把数组中第i小的数放在第i个位置上
		for j := 0; j < len(a)-i-1; j++ {
			if a[j] > a[j+1] {
				temp = a[j+1]
				a[j+1] = a[j]
				a[j] = temp
			}
			fmt.Printf("第 %d 遍的第 %d 次交换：", i+1, j+1)
			fmt.Println(a)
		}
		fmt.Printf("第 %d 遍最终结果", i+1)
		fmt.Println(a)
		fmt.Println("**********")

	}

}
