using System;

namespace 주식가격
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] test = { 1, 2, 3, 2, 3 };

            solution(test);
            Console.WriteLine("Hello World!");
        }

        static int[] solution(int[] prices)
        {
            int[] answer = new int[prices.Length];

            for (int i = 0; i < prices.Length; i++)
            {
                for (int j = i + 1; j < prices.Length; j++)
                {
                    answer[i]++;
                    if (prices[i] > prices[j])
                    {
                        break;
                    }
                }

                for (int d = 0; d < answer.Length; d++)
                {
                    Console.Write(answer[d] + " ");
                }
                Console.WriteLine("\n--------------");
            }
            return answer;
        }
    }
}
