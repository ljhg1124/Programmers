using System;
using System.Collections.Generic;
using System.Linq;

namespace 프린터
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] testArr = new int[] { 2, 1, 3, 2 };

            solution(testArr, 2);
            Console.WriteLine("Hello World!");
        }

        static public int solution(int[] priorities, int location)
        {
            int answer = 0;
            int Lank = 1;
            int idx = 0;
            int[] LankArr = new int[100];
            List<int> prior = new List<int>(priorities);

            while (prior.Count != 0)
            {
                var itr = prior.Max();
                if (priorities[idx] == itr)
                {
                    LankArr[idx] = Lank;
                    Lank++;

                    prior.Remove(itr);
                }

                idx = idx == priorities.Length - 1 ? 0 : idx + 1;
            }

            answer = LankArr[location];

            return answer;
        }
    }
}
