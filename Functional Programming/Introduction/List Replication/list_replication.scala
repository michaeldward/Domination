// f: takes in an integer (num) and a list (arr); returns the list with
// each element duplicated num times. Uses flatMap with an anonymous function
// to replace each element in the list with num repetitions.
def f(num:Int, arr:List[Int]):List[Int] = arr flatMap { e => List.fill(num)(e) }
