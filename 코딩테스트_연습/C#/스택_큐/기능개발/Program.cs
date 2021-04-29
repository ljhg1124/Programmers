using System;
using System.Collections.Generic;

namespace 기능개발
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] progresses = { 93, 30, 55 };
            int[] speeds = { 1, 30, 5 };

            solution(progresses, speeds);

            Console.WriteLine("Hello World!");
        }
        static public int[] solution(int[] progresses, int[] speeds)
        {
            Queue<int> result = new Queue<int>();
            Queue<int> rate = new Queue<int>();

            for (int i = 0; i < progresses.Length; i++)
            {
                rate.Enqueue(countDay(progresses[i], speeds[i]));
            }

            int count = 0;
            int cur = rate.Peek();

            while (rate.Count != 0)
            {
                if (cur < rate.Peek())
                {
                    result.Enqueue(count);
                    cur = rate.Peek();
                    count = 0;
                }
                count++;
                rate.Dequeue();
            }

            result.Enqueue(count);
            return result.ToArray();
        }

        static int countDay(int progresses, int speeds)
        {
            int persent = progresses;
            int count = 0;
            while (persent < 100)
            {
                persent += speeds;
                count++;
            }

            return count;
        }
    }
}
