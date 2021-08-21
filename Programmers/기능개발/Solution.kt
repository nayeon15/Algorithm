import  java.util.*

class Programmers_stack {

    class Solution {
        fun solution(progresses: IntArray, speeds: IntArray): IntArray {
            val days = progresses.zip(speeds).map { (p, s) ->
                val left = 100 - p
                val div = left / s
                val mod = if (left % s > 0) 1 else 0
                div + mod
            }
            val stack = Stack<Pair<Int, Int>>()
            stack.add(Pair(days.first(), 1))

            for (day in days.drop(1)) {
                if (day <= stack.peek().first) {
                    val (a, b) = stack[stack.size-1]
                    stack[stack.size-1] = Pair(a, b+1)
                }
                else {
                    stack.add(Pair(day, 1))
                }
            }
            return stack.map { it.second }.toIntArray()
        }
    }

}