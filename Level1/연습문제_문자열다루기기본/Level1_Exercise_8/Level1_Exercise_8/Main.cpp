#include "Main.h"

/*
문자열 다루기 기본

문제 설명
문자열 s의 길이가 4 혹은 6이고, 숫자로만 구성돼있는지 확인해주는 함수, solution을 완성하세요. 예를 들어 s가 a234이면 False를 리턴하고 1234라면 True를 리턴하면 됩니다.

제한 사항
s는 길이 1 이상, 길이 8 이하인 문자열입니다.

입출력 예
s		return
a234	false
1234	true
*/

#include <string>
#include <vector>

using namespace std;

bool solution(string s) {
	int len = s.length();

	// 길이 제한
	if (!(len == 4 || len == 6)) return false;

	for (auto alp : s)
	{
		if (!(alp >= '0' && alp <= '9')) return false;
	}

	return true;
}

int main(void)
{

	string s = { "1234" };

	solution(s);

	return 0;
}
