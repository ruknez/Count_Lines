package main

import (
	"bufio"
	"fmt"
	"os"
)

func main() {

	arguments := os.Args[0:]
	if len(arguments) < 2 {
		fmt.Printf("ERROR, no file \n")
		return
	}

	file, file_err := os.Open(arguments[1])
	if file_err != nil {
		fmt.Println("Can`t open file:", file_err)
		return
	}

	f := bufio.NewReader(file)
	var counter uint64 = 0

	for {
		_, err := f.ReadString('\n')
		counter++
		if err != nil {
			counter--
			break
		}
	}

	file.Close()
	fmt.Println("count of string = ", counter, " ", (arguments[1]))
}
