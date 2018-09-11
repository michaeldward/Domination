// f: takes in a list (arr); returns the sum of all odd elements in the list.
def f(arr: List[Int]):Int = {
    arr.map(x => if (x % 2 != 0) x else 0).foldLeft(0)(_ + _)
}
