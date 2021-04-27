using System;
using System.Collections.Generic;

class Solution
{
    public static void Main(string[] args)
    {
        int[] test = { 7, 4, 5, 6 };

        solution(2, 10, test);
    }

    static int solution(int bridge_length, int weight, int[] truck_weights)
    {
        int answer = 0;
        List<int> truck = new List<int>(truck_weights);
        //List<int> bridgeIntruck = new List<int>();
        List<int> bridge = new List<int>();
        int weight_sum = 0;

        while (true)
        {
            if (bridge.Count >= bridge_length)
            {
                weight_sum -= bridge[0];
                bridge.RemoveAt(0);

            }

            // 다리 무게와 길이가 설정값 이하일때 진입 가능            
            if (truck.Count != 0
            && weight_sum + truck[0] <= weight
            && bridge.Count <= bridge_length)
            {
                bridge.Add(truck[0]);
                weight_sum += truck[0];

                truck.RemoveAt(0);
            }
            else
            {
                bridge.Add(0);
            }

            // 시간 증가.
            answer++;
            Console.WriteLine("시간 " + answer + ",    무게합 " + weight_sum);

            for (int i = 0; i < bridge.Count; i++)
            {
                if (bridge != null)
                {
                    Console.WriteLine(bridge[i]);
                }
            }



            // Exit 조건.
            if (truck.Count == 0 && weight_sum == 0) break;
        }

        return answer;
    }
}