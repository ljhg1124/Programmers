#include "Main.h"

/*
���� ū ��
���� ����
0 �Ǵ� ���� ������ �־����� ��, ������ �̾� �ٿ� ���� �� �ִ� ���� ū ���� �˾Ƴ� �ּ���.

���� ���, �־��� ������ [6, 10, 2]��� [6102, 6210, 1062, 1026, 2610, 2106]�� ���� �� �ְ�, ���� ���� ū ���� 6210�Դϴ�.

0 �Ǵ� ���� ������ ��� �迭 numbers�� �Ű������� �־��� ��, ������ ���ġ�Ͽ� ���� �� �ִ� ���� ū ���� ���ڿ��� �ٲپ� return �ϵ��� solution �Լ��� �ۼ����ּ���.

���� ����
numbers�� ���̴� 1 �̻� 100,000 �����Դϴ�.
numbers�� ���Ҵ� 0 �̻� 1,000 �����Դϴ�.
������ �ʹ� Ŭ �� ������ ���ڿ��� �ٲپ� return �մϴ�.

����� ��
numbers				return
[6, 10, 2]			6210
[3, 30, 34, 5, 9]	9534330
*/

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool NumberCheck(string &s1, string &s2)
{
	return s1 + s2 > s2 + s1 ? true : false;
}

string solution(vector<int> numbers) 
{
	string answer = "";
	int len = numbers.size();
	vector<string> s_numbers;

	
	for (int i = 0; i < len; i++)
	{
		s_numbers.push_back(to_string(numbers[i]));
	}

	sort(s_numbers.begin(), s_numbers.end(), NumberCheck);

	for (int i = 0; i < len; i++)
	{
		answer += s_numbers[i];
	}

	answer = answer[0] == '0' ? "0" : answer;

	return answer;
}

int main(void)
{
	vector<int> numbers = { 6, 10, 2 };

	solution(numbers);

	return 0;
}