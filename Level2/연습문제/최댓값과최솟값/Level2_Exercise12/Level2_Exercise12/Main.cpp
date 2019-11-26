#include "Main.h"


/*
�ִ񰪰� �ּڰ�

���� ����
���ڿ� s���� �������� ���е� ���ڵ��� ����Ǿ� �ֽ��ϴ�. 
str�� ��Ÿ���� ���� �� �ּҰ��� �ִ밪�� ã�� �̸� (�ּҰ�) (�ִ밪)������ ���ڿ��� ��ȯ�ϴ� �Լ�, solution�� �ϼ��ϼ���.
������� s�� 1 2 3 4��� 1 4�� �����ϰ�, -1 -2 -3 -4��� -4 -1�� �����ϸ� �˴ϴ�.

���� ����

s���� �� �̻��� ������ �������� ���еǾ� �ֽ��ϴ�.

����� ��

s				return
1 2 3 4			1 4
-1 -2 -3 -4		-4 -1
-1 -1			-1 -1
*/

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string s) {
	string answer = "";
	string result = "";
	vector<int> vi;

	string::iterator sit = s.begin();

	while(true)
	{
		if (*sit != ' ') result += *sit;
		else
		{
			vi.push_back(stoi(result));
			result = "";
		}

		s.erase(sit);

		if (s.empty())
		{
			vi.push_back(stoi(result));
			break;
		}
	}

	answer = to_string(*min_element(vi.begin(), vi.end())) + " " + to_string(*max_element(vi.begin(), vi.end()));

	return answer;
}

int main(void)
{
	string s = { "-1 -2 -3 -4" };
	solution(s);

	return 0;
}
