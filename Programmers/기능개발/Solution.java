import java.util.ArrayList;

public class programmers_stack {

    class Solution {
        public int[] solution(int[] progresses, int[] speeds) {
            int[] answer = new int[progresses.length];

            for(int i=0; i < progresses.length;i++){
                int prog = progresses[i];
                int workingTime = 0;
                while(true){
                    if(prog >= 100) break;
                    prog += speeds[i];
                    workingTime++;
                }
                answer[i] = workingTime;
            }

            //값 확인
            ArrayList<Integer> list = new ArrayList<>();
            for(int i=0 ; i < answer.length ; i++){
                int origin = answer[i];
                int count = 1;
                if(origin < 0){continue;}
                for(int j=i+1 ; j < answer.length ; j++){
                    int compare = answer[j];
                    if(origin >= compare){
                        answer[j] = -1; 
                        count++;
                    } else {
                        break;
                    }
                }
                list.add(count);
            }
            answer = list.stream().mapToInt(i ->i).toArray();
            return answer;
        }
    }

}
