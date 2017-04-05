package main
import (
    "fmt"
)

func main() {
 //Enter your code here. Read input from STDIN. Print output to STDOUT
    var a[5] int
    fmt.Scanf("%d", &a[0])
    fmt.Scanf("%d", &a[1])
    fmt.Scanf("%d", &a[2])
    fmt.Scanf("%d", &a[3])
    fmt.Scanf("%d", &a[4])
    var max int
    var min int
    max = a[0]
    min = a[0]
    var sum int
    sum = 0
    for i := 0; i < len(a); i += 1{
        if a[i] > max{
            max = a[i]
        }
        if a[i] < min{
            min = a[i]
        }
        sum += a[i]
    }
    fmt.Print(sum - max)
    fmt.Print(" ")
    fmt.Print(sum - min)
}