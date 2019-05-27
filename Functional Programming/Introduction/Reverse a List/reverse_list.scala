def f(arr:List[Int]):List[Int] = arr match {
    case elem :: Nil => List(elem)
    case elem :: rest => f(rest) :+ elem
}
