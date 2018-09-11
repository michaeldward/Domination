// f: takes in a list (arr); returns the length of the list without using count, size or length.
def f(arr:List[Int]):Int = arr.map(_ => 1).foldLeft(0)(_ + _)
