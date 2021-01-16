package main

import (
	"fmt"
	"log"
	"os"
)

var cwd string //全局变量

func main() {
	//var cwd string //在这不是全局变量，test()不能使用
	var err error         //在这里定义err，避免使用 :=
	cwd, err = os.Getwd() //获取当前路径
	if err != nil {
		log.Fatalf("os.Getwd failed: %v", err)
		fmt.Println(err)
	}
	fmt.Println(err)
	//fmt.Println(cwd)
	test()
}
func test() {
	fmt.Println("test:" + cwd)
}
