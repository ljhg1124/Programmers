#include "Main.h"

/*

���� ��ȣ

���� ����
� ������ �� ���ĺ��� ������ �Ÿ���ŭ �о �ٸ� ���ĺ����� �ٲٴ� ��ȣȭ ����� ���� ��ȣ��� �մϴ�. ���� ��� AB�� 1��ŭ �и� BC�� �ǰ�, 3��ŭ �и� DE�� �˴ϴ�. z�� 1��ŭ �и� a�� �˴ϴ�. ���ڿ� s�� �Ÿ� n�� �Է¹޾� s�� n��ŭ �� ��ȣ���� ����� �Լ�, solution�� �ϼ��� ������.

���� ����
������ �ƹ��� �о �����Դϴ�.
s�� ���ĺ� �ҹ���, �빮��, �������θ� �̷���� �ֽ��ϴ�.
s�� ���̴� 8000�����Դϴ�.
n�� 1 �̻�, 25������ �ڿ����Դϴ�.

����� ��
s		n	result
AB		1	BC
z		1	a
a B z	4	e F d

*/

#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
	string answer = "";

	for (auto alp : s)
	{
		if (alp == ' ')
		{
			answer += " ";
		}
		else
		{
			char c = alp;

			for (int i = 0; i < n; i++)
			{
				if (c == 'z')
				{
					c = 96;
				}
				else if (c == 'Z')
				{
					c = 64;
				}
				c++;
			}
			
			answer += c;
		}
	}

	return answer;
}

int main(void)
{
	string s = "a B z";
	solution(s, 4);
	return 0;
}