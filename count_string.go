
package main
import (
 "fmt"
 "bufio"
 "os"
 )

func main() {

	arguments := os.Args [0:]
	if len (arguments) < 2 {
		fmt.Printf ("ERROR, no file \n")
		return
	}

	file, file_err := os.Open(arguments [1])
	if file_err != nil {
		fmt.Println ("No such file \n")
		return
	}

	f := bufio.NewReader(file)
	var counter uint64 = 0

	for {
		read_line, err := f.ReadString('\n')
	//	fmt.Print(read_line)
		counter++
		if err != nil {
			counter--
			read_line = "not used"
			break
		}
	}

	file.Close()
	fmt.Println ("count of string = ", counter, " ",(arguments [1]))
}
