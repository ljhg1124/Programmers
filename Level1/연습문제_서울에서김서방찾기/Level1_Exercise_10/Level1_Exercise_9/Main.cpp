#include "Main.h"

/*
���￡�� �輭�� ã��

���� ����
String�� �迭 seoul�� element�� Kim�� ��ġ x�� ã��, �輭���� x�� �ִٴ� String�� ��ȯ�ϴ� �Լ�, solution�� �ϼ��ϼ���. seoul�� Kim�� ���� �� ���� ��Ÿ���� �߸��� ���� �ԷµǴ� ���� �����ϴ�.

���� ����
seoul�� ���� 1 �̻�, 1000 ������ �迭�Դϴ�.
seoul�� ���Ҵ� ���� 1 �̻�, 20 ������ ���ڿ��Դϴ�.
Kim�� �ݵ�� seoul �ȿ� ���ԵǾ� �ֽ��ϴ�.

����� ��

seoul			return
[Jane, Kim]		�輭���� 1�� �ִ�

*/

#include <string>
#include <vector>

using namespace std;

string solution(vector<string> seoul) {
	string answer = "�輭���� ";
	
	for (int i = 0; i < seoul.size(); i++)
	{
		if (seoul[i] == "Kim")
		{
			answer += to_string(i);
		}
	}

	answer += "�� �ִ�";

	return answer;
}

int main(void)
{
	vector<string> seoul = { "Jane", "Kim" };

	solution(seoul);

	return 0;
}
