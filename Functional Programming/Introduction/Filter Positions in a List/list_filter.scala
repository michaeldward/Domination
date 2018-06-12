// f: takes in a list of integers and returns a list of only
// the integers that had odd indexes in the original array
def f(arr:List[Int]):List[Int] = {
    val odd_indexes = (0 until arr.length).toList.filter(_ % 2 != 0)
    odd_indexes.map(arr)
}
