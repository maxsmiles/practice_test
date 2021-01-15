package main

import (
	"fmt"
	"github.com/PuerkitoBio/goquery"
	"io/ioutil"
	"net/http"
)

func main() {
	var url = "http://www.tcmap.com.cn/liaoning/"
	resp, err := http.Get(url)
	if err != nil {
		//return err
		panic(err)
	}
	if resp.StatusCode != http.StatusOK {
		resp.Body.Close()
		fmt.Println("出错")
	}
	fmt.Println(ioutil.ReadAll(resp.Body))
	doc, err := goquery.NewDocumentFromReader(resp.Body)
	if err != nil {
		panic(err)
	}
	fmt.Println(doc)
}
