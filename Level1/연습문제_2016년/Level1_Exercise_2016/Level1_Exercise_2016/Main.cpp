#include "Main.h"

/*
문제 설명
2016년 1월 1일은 금요일입니다. 2016년 a월 b일은 무슨 요일일까요? 두 수 a ,b를 입력받아 2016년 a월 b일이 무슨 요일인지 리턴하는 함수, solution을 완성하세요. 요일의 이름은 일요일부터 토요일까지 각각 SUN,MON,TUE,WED,THU,FRI,SAT

입니다. 예를 들어 a=5, b=24라면 5월 24일은 화요일이므로 문자열 TUE를 반환하세요.

제한 조건
2016년은 윤년입니다.
2016년 a월 b일은 실제로 있는 날입니다. (13월 26일이나 2월 45일같은 날짜는 주어지지 않습니다)
입출력 예
a	b	result
5	24	"TUE"
*/

#include <string>
#include <vector>

using namespace std;

//					 1   2   3   4   5   6   7   8   9   10  11  12
const int iDays[] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

//						목	   금	  토		 일		월	   화	  수	   
const string sDays[] = {"THU", "FRI", "SAT", "SUN", "MON", "TUE", "WED", };

string solution(int a, int b)
{
	string answer = "";
	int result = 0;

	for (int i = 0; i < a - 1 ; i++)
	{
		result += iDays[i];
	}

	answer = sDays[(result+b) % 7];

	return answer;
}


int main()
{
	solution(5, 24);
	return 0;
}