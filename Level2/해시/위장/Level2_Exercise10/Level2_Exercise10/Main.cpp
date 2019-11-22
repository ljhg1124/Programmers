#include "Main.h"

/*

���� ����
�����̵��� ���� �ٸ� ���� �����Ͽ� �Ծ� �ڽ��� �����մϴ�.

���� ��� �����̰� ���� ���� �Ʒ��� ���� ���� �����̰� ���׶� �Ȱ�, �� ��Ʈ, �Ķ��� Ƽ������ �Ծ��ٸ� �������� û������ �߰��� �԰ų� ���׶� �Ȱ� ��� ���� ���۶󽺸� �����ϰų� �ؾ� �մϴ�.

����		�̸�
��		���׶� �Ȱ�, ���� ���۶�
����		�Ķ��� Ƽ����
����		û����
�ѿ�		�� ��Ʈ

�����̰� ���� �ǻ���� ��� 2���� �迭 clothes�� �־��� �� ���� �ٸ� ���� ������ ���� return �ϵ��� solution �Լ��� �ۼ����ּ���.

���ѻ���

clothes�� �� ���� [�ǻ��� �̸�, �ǻ��� ����]�� �̷���� �ֽ��ϴ�.
�����̰� ���� �ǻ��� ���� 1�� �̻� 30�� �����Դϴ�.
���� �̸��� ���� �ǻ��� �������� �ʽ��ϴ�.
clothes�� ��� ���Ҵ� ���ڿ��� �̷���� �ֽ��ϴ�.
��� ���ڿ��� ���̴� 1 �̻� 20 ������ �ڿ����̰� ���ĺ� �ҹ��� �Ǵ� '_' �θ� �̷���� �ֽ��ϴ�.
�����̴� �Ϸ翡 �ּ� �� ���� �ǻ��� �Խ��ϴ�.

����� ��
clothes																			return
[[yellow_hat, headgear], [blue_sunglasses, eyewear], [green_turban, headgear]]	5
[[crow_mask, face], [blue_sunglasses, face], [smoky_makeup, face]]				3

����� �� ����
���� #1
headgear�� �ش��ϴ� �ǻ��� yellowhat, greenturban�̰� eyewear�� �ش��ϴ� �ǻ��� blue_sunglasses�̹Ƿ� �Ʒ��� ���� 5���� ������ �����մϴ�.

1. yellow_hat
2. blue_sunglasses
3. green_turban
4. yellow_hat + blue_sunglasses
5. green_turban + blue_sunglasses

���� #2
face�� �ش��ϴ� �ǻ��� crowmask, bluesunglasses, smoky_makeup�̹Ƿ� �Ʒ��� ���� 3���� ������ �����մϴ�.

1. crow_mask
2. blue_sunglasses
3. smoky_makeup

*/

#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int solution(vector<vector<string>> clothes) 
{
	unordered_map<string, int> m;
	int answer = 1;	// ���ϱ� ���궧�� 0�� ����
	
	// �� �ǻ� ���� ī����
	for (auto alp : clothes)
		m[alp[1]]++;

	// ����� �� ����.
	for (auto alp : m)
		answer *= (alp.second + 1);
	
	// �ϳ��� ���� �ʾ����� Ȯ�� ����.
	answer -= 1;

	return answer;
}

int main(void)
{
	vector<vector<string>> clothes = 
	{
		{"yellow_hat", "headgear"},
		{"blue_sunglasses", "eyewear"},
		{"green_turban", "headgear"},
		{"green_tuhgan", "heghjear"}
	};

	solution(clothes);

	return 0;
}
