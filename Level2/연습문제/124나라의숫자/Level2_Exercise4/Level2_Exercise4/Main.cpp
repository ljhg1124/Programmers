#include "Main.h"

/*

124 ������ ����

���� ����
124 ���� �ֽ��ϴ�. 124 ���󿡼��� 10������ �ƴ� ������ ���� �ڽŵ鸸�� ��Ģ���� ���� ǥ���մϴ�.

124 ���󿡴� �ڿ����� �����մϴ�.
124 ���󿡴� ��� ���� ǥ���� �� 1, 2, 4�� ����մϴ�.
���� �� 124 ���󿡼� ����ϴ� ���ڴ� ������ ���� ��ȯ�˴ϴ�.

10����	124 ����		10����	124 ����
1		1			6		14
2		2			7		21
3		4			8		22
4		11			9		24
5		12			10		41

�ڿ��� n�� �Ű������� �־��� ��, n�� 124 ���󿡼� ����ϴ� ���ڷ� �ٲ� ���� return �ϵ��� solution �Լ��� �ϼ��� �ּ���.

���ѻ���
n�� 500,000,000������ �ڿ��� �Դϴ�.

����� ��
n	result
1	1
2	2
3	4
4	11

*/

#include <string>
#include <vector>

using namespace std;

string solution(int n) 
{
	string answer = "";
	int arr[3] = { 4, 1, 2 };

	while (n > 0)
	{
		int namuzi = n % 3;
		n = namuzi ? n / 3 : (n / 3) - 1;
		answer.insert(0, to_string(arr[namuzi]));
	}

	return answer;
}

int main()
{
	solution(11);
	return 0;
}