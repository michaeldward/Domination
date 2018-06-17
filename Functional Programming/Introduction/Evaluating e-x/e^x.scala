import java.io._

object Solution {

    def factorial(n: Int): Int = n match {
        case 0 => 1
        case _ => n * factorial(n-1)
    }
    
    def ex(x: Double, n: Int): Double = n match {
        case 0 => 1
        case _ => (scala.math.pow(x, n) / factorial(n)) + ex(x, n-1)
    }

    def main(args: Array[String]) {
        val stdin = scala.io.StdIn

        val n = stdin.readLine.trim.toInt

        for (nItr <- 1 to n) {
            val x = stdin.readLine.trim.toDouble
            println(ex(x, 9))
        }
    }
}
