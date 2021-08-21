import java.util.*

class Solution {

    fun solution(bridge_length: Int, weight: Int, truck_weights: IntArray): Int {
        val readyQueue: Queue<Truck> = LinkedList<Truck>()
        val onBridgeQueue: Queue<Truck> = LinkedList<Truck>()
        var onBridgeTotalTruckWeight = 0
        var time = 0

        for (weight in truck_weights) {
            readyQueue.offer(Truck(weight, 0))
        }

        while (true) {
            if (readyQueue.isNotEmpty()) {
                if (readyQueue.peek().weight + onBridgeTotalTruckWeight <= weight) {
                    with(readyQueue.poll()) {
                        onBridgeTotalTruckWeight += this.weight
                        onBridgeQueue.offer(this)
                    }
                }
            }
            for (truck2: Truck in onBridgeQueue) {
                truck2.postion++
            }
            if (onBridgeQueue.peek().postion >= bridge_length) {
                onBridgeTotalTruckWeight -= onBridgeQueue.poll().weight
            }
            time++
            if(readyQueue.isEmpty() && onBridgeQueue.isEmpty()){
                break
            }
        }
        return time + 1
    }


    data class Truck(var weight: Int, var postion: Int)
}