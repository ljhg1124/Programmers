#include "Main.h"

/*
��ȭ��ȣ ���

���� ����
��ȭ��ȣ�ο� ���� ��ȭ��ȣ ��, �� ��ȣ�� �ٸ� ��ȣ�� ���ξ��� ��찡 �ִ��� Ȯ���Ϸ� �մϴ�.
��ȭ��ȣ�� ������ ���� ���, ������ ��ȭ��ȣ�� �������� ��ȭ��ȣ�� ���λ��Դϴ�.

������ : 119
���ؿ� : 97 674 223
������ : 11 9552 4421
��ȭ��ȣ�ο� ���� ��ȭ��ȣ�� ���� �迭 phone_book �� solution �Լ��� �Ű������� �־��� ��, � ��ȣ�� �ٸ� ��ȣ�� ���ξ��� ��찡 ������ false�� �׷��� ������ true�� return �ϵ��� solution �Լ��� �ۼ����ּ���.

���� ����
phone_book�� ���̴� 1 �̻� 1,000,000 �����Դϴ�.
�� ��ȭ��ȣ�� ���̴� 1 �̻� 20 �����Դϴ�.

����� ����
phone_book						return
[119, 97674223, 1195524421]		false
[123,456,789]					true
[12,123,1235,567,88]			false

����� �� ����
����� �� #1
�տ��� ������ ���� �����ϴ�.

����� �� #2
�� ��ȣ�� �ٸ� ��ȣ�� ���λ��� ��찡 �����Ƿ�, ���� true�Դϴ�.

����� �� #3
ù ��° ��ȭ��ȣ, ��12���� �� ��° ��ȭ��ȣ ��123���� ���λ��Դϴ�. ���� ���� false�Դϴ�.

�˸�

2019�� 5�� 13��, �׽�Ʈ ���̽��� ����Ǿ����ϴ�. �̷� ���� ������ ����ϴ� �ڵ尡 �� �̻� ������� ���� �� �ֽ��ϴ�.
*/

#include <string>
#include <vector>

using namespace std;

bool solution(vector<string> phone_book) {
	bool answer = true;


	for (auto alp : phone_book)
	{
		for (auto alp2 : phone_book)
		{
			if (alp == alp2) continue;
			else if (alp == alp2.substr(0, alp.size()))
			{
				answer = false;
				break;
			}
		}

		if (!answer) break;
	}

	return answer;
}

int main(void)
{
	vector<string> phone_book = { "119", "97674223", "1195524421" };

	solution(phone_book);
	return 0;
}