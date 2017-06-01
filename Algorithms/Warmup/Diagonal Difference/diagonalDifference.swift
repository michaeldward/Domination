import Foundation

// read the integer n
let n = Int(readLine()!)!

// declare 2d array
var arr: [[Int]] = []

// read array row-by-row
for i in 0..<n
{
    arr.append(readLine()!.components(separatedBy: " ").map{ Int($0)! })
}

//sum up the diagonals
var sum0 = 0
var sum1 = 0
for i in 0..<n
{
    sum0 += arr[i][i]
    sum1 += arr[i][n-i-1]
}

//calculate difference and print
var diff = sum0 - sum1
if (diff < 0)
{
    print(0 - diff)
}
else
{
    print(diff)
}