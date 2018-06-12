object Solution extends App {
    // f: returns a list with elements from 0 until num
    def f(num:Int) : List[Int] = {
        return List.range(0, num)
    }
    println(f(readInt))
}
