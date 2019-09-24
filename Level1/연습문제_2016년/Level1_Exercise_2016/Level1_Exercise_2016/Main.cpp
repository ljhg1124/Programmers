#include "Main.h"

/*
���� ����
2016�� 1�� 1���� �ݿ����Դϴ�. 2016�� a�� b���� ���� �����ϱ��? �� �� a ,b�� �Է¹޾� 2016�� a�� b���� ���� �������� �����ϴ� �Լ�, solution�� �ϼ��ϼ���. ������ �̸��� �Ͽ��Ϻ��� ����ϱ��� ���� SUN,MON,TUE,WED,THU,FRI,SAT

�Դϴ�. ���� ��� a=5, b=24��� 5�� 24���� ȭ�����̹Ƿ� ���ڿ� TUE�� ��ȯ�ϼ���.

���� ����
2016���� �����Դϴ�.
2016�� a�� b���� ������ �ִ� ���Դϴ�. (13�� 26���̳� 2�� 45�ϰ��� ��¥�� �־����� �ʽ��ϴ�)
����� ��
a	b	result
5	24	"TUE"
*/

#include <string>
#include <vector>

using namespace std;

//					 1   2   3   4   5   6   7   8   9   10  11  12
const int iDays[] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

//						��	   ��	  ��		 ��		��	   ȭ	  ��	   
const string sDays[] = {"THU", "FRI", "SAT", "SUN", "MON", "TUE", "WED", };

string solution(int a, int b)
{
	string answer = "";
	int result = 0;

	for (int i = 0; i < a - 1 ; i++)
	{
		result += iDays[i];
	}

	answer = sDays[(result+b) % 7];

	return answer;
}


int main()
{
	solution(5, 24);
	return 0;
}