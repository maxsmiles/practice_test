package example

import (
	"testing"
)

func TestAdd(t *testing.T) {
	r := LoadConfig(2, 3)
	if r != 5 {
		t.Fatalf("LoadConfig(2,3) error, expect:%d, actual:%d", 5, r)
	}
	t.Log("test add succ")
}

func Test2(t *testing.T) {
	r := LoadConfig(3, 3)
	if r != 8 {
		t.Fatal("fail!")
	}
	t.Logf("successful!")

}
