#include <iostream>
#include <vector>

using namespace std;

vector< vector<int> > color_Type;

int dfs(int type, int x, int y, int m, int n)
{
    if(x >= m || y >= n || x < 0 || y < 0 || color_Type[x][y] != type) return 0;
    
    int result = 1;
    color_Type[x][y] = 0;

    result += dfs(type, x - 1, y, m, n);  // left
    result += dfs(type, x, y - 1, m, n);  // top
    result += dfs(type, x + 1, y, m, n);  // right
    result += dfs(type, x, y + 1, m, n);  // bottom
    
    return result;
}

// 전역 변수를 정의할 경우 함수 내에 초기화 코드를 꼭 작성해주세요.
vector<int> solution(int m, int n, vector< vector<int> > picture) {
    int number_of_area = 0;
    int max_size_of_one_area = 0;

    color_Type = picture;

    //  m x n 크기만큼 루프
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(color_Type[i][j] == 0) continue; // 확인된 칸이면 넘김.

            int temp = dfs(color_Type[i][j], i, j, m, n);   // 반환된 영역 크기 받기

            max_size_of_one_area = temp > max_size_of_one_area ? temp : max_size_of_one_area;

            // 영역이 확인 될때만 플러스 됨. 이미 확인된 영역은 type이 0이 되므로 여기까지 들어오지 않음. 즉 1번만 인식됨.
            number_of_area++;

        }
    }
    
    vector<int>   answer(2);
    answer[0] = number_of_area;
    answer[1] = max_size_of_one_area;
    return answer;
}

int main(void)
{
    vector<vector<int> > picture;
    vector<int> pic;
    pic.push_back(1);
    pic.push_back(1);
    pic.push_back(1);
    pic.push_back(0);
    picture.push_back(pic);
    pic.clear();

    pic.push_back(1);
    pic.push_back(2);
    pic.push_back(2);
    pic.push_back(0);
    picture.push_back(pic);
    pic.clear();

    pic.push_back(1);
    pic.push_back(0);
    pic.push_back(0);
    pic.push_back(1);
    picture.push_back(pic);
    pic.clear();

    pic.push_back(0);
    pic.push_back(0);
    pic.push_back(0);
    pic.push_back(1);
    picture.push_back(pic);
    pic.clear();

    pic.push_back(0);
    pic.push_back(0);
    pic.push_back(0);
    pic.push_back(3);
    picture.push_back(pic);
    pic.clear();

    pic.push_back(0);
    pic.push_back(0);
    pic.push_back(0);
    pic.push_back(3);
    picture.push_back(pic);
    pic.clear();

    solution(6, 4, picture);
    return 0;
}