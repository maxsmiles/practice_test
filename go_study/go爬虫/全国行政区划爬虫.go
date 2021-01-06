package main

import (
	"encoding/csv"
	"fmt"
	"io/ioutil"
	"net/http"
	"os"
	"github.com/axgle/mahonia"
	"github.com/PuerkitoBio/goquery"
	"strings"
)

func main() {

	var city = []string{"beijing","tianjin","shanghai","chongqing","hebei","henan",
		"liaoning","heilongjiang","hunan","anhui","shandong","jiangsu","xinjiang",
	"zhejiangsheng","jiangxi","hubei","guangxi","gansusheng","shanxi","neimenggu","shanxisheng",
	"jilin","fujian","guizhou","guangdong","qinghai","Tibet","sichuan","ningxia",
	"hainan","taiwan","HongKong","Macau"}
	for _,v := range city{
		//fmt.Println(v)
		client := &http.Client{}
		var url = "http://www.tcmap.com.cn/"
		url2 := url+v+"/"
		//fmt.Println(url2)
		request, err := http.NewRequest("GET",url2,nil)
		request.Header.Add("User_Agent","Mozilla/5.0 (Windows NT 10.0; WOW64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/80.0.3987.162 Safari/537.36")
		if err != nil {
			//return err
			panic(err)
		}
		response,_ := client.Do(request)
		defer response.Body.Close()

		b,err := ioutil.ReadAll(response.Body)
		if err != nil {
			fmt.Fprintf(os.Stderr,"fetch:reading %s:%v\n",url,err)
			os.Exit(1)
		}
		bodystr := mahonia.NewDecoder("gbk").ConvertString(string(b))
		//fmt.Println(bodystr)

		doc, err := goquery.NewDocumentFromReader(strings.NewReader(bodystr))
		if err != nil {
			panic(err)
		}
		file, err := os.OpenFile("text.csv", os.O_RDWR|os.O_APPEND, 0666)

		if err != nil {
			panic(err)
		}
		defer file.Close()
		file.WriteString("\xEF\xBB\xBF")
		w := csv.NewWriter(file)
		doc.Find("#page_left h1").Each(func(i int, s *goquery.Selection){
			//fmt.Println(s.Text())
			s1 := s.Text()
			var date1 []string
			date1 = append(date1,s1)
			fmt.Println(date1)
			w.Write(date1)
			w.Flush()
			doc.Find("#page_left > table:nth-child(3) > tbody > tr").Each(func(i int, s *goquery.Selection){
				//fmt.Println(s.Text())
				var date2 []string
				s.Find("td").Each(func(i int, o *goquery.Selection){
					s2 := o.Text()
					date2 = append(date2,s2)
				})
				fmt.Println(date2)
				w.Write(date2)
				w.Flush()
			})
		})
		n := []string{"\n"}
		w.Write(n)
		w.Flush()
	}
	//fmt.Println(city)
}
