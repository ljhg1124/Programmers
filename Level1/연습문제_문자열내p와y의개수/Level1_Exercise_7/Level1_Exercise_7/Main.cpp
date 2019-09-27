#include "Main.h"

/*

���ڿ� �� p�� y�� ����

���� ����
�빮�ڿ� �ҹ��ڰ� �����ִ� ���ڿ� s�� �־����ϴ�. s�� 'p'�� ������ 'y'�� ������ ���� ������ True, �ٸ��� False�� return �ϴ� solution�� �ϼ��ϼ���. 'p', 'y' ��� �ϳ��� ���� ���� �׻� True�� �����մϴ�. ��, ������ ���� �� �빮�ڿ� �ҹ��ڴ� �������� �ʽ��ϴ�.

���� ��� s�� pPoooyY�� true�� return�ϰ� Pyy��� false�� return�մϴ�.

���ѻ���
���ڿ� s�� ���� : 50 ������ �ڿ���
���ڿ� s�� ���ĺ����θ� �̷���� �ֽ��ϴ�.

����� ��
s			answer
pPoooyY		true
Pyy			false

����� �� ����
����� �� #1
'p'�� ���� 2��, 'y'�� ���� 2���� �����Ƿ� true�� return �մϴ�.

����� �� #2
'p'�� ���� 1��, 'y'�� ���� 2���� �ٸ��Ƿ� false�� return �մϴ�.

*/

#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
	bool answer = true;
	int countP = 0;
	int countY = 0;

	for (int i = 0; i < s.length(); i++)
	{
		countP = s[i] == 'P' || s[i] == 'p' ? ++countP : countP;
		countY = s[i] == 'Y' || s[i] == 'y' ? ++countY : countY;
	}

	if (countP != countY) answer = false;

	return answer;
}



int main()
{
	string s = { "Pyy" };

	solution(s);

	return 0;
}
