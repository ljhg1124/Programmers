#include "Main.h"

/*
�ڵ��� ��ȣ ������

���� ����
���α׷��ӽ� ������� �������� ��ȣ�� ���� �������� ���� �� ������ ��ȭ��ȣ�� �Ϻθ� �����ϴ�.
��ȭ��ȣ�� ���ڿ� phone_number�� �־����� ��, ��ȭ��ȣ�� �� 4�ڸ��� ������ ������ ���ڸ� ���� *���� ���� ���ڿ��� �����ϴ� �Լ�, solution�� �ϼ����ּ���.

���� ����
s�� ���� 4 �̻�, 20������ ���ڿ��Դϴ�.

����� ��
phone_number	return
01033334444	*******4444
027778888	*****8888

*/

#include <string>
#include <vector>

using namespace std;

string solution(string phone_number) 
{
	string answer = phone_number;

	for (int i = 0; i < phone_number.length()-4; i++)
	{
		answer[i] = '*';
	}
	
	return answer;
}

int main(void)
{
	solution("01033334444");
	return 0;
}
