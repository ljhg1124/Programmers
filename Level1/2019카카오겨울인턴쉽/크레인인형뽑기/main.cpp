#include <string>
#include <vector>
#include <stack>

using namespace std;

int solution(vector< vector<int> > board, vector<int> moves) {
    int answer = 0;
    stack<int> basket;
    int cur = 0;

    // moves 만큼 돌림.
    for(int i = 0; i < moves.size(); i++)
    {   
        // board 세로길이 만큼 탐색
        for(int move = 0; move < board.size(); move++)
        {
            cur = board[move][moves[i]-1];  // moves 배열은 0부터 이므로 -1 해준다.
            if( cur > 0 ) 
            {
                // 제일 위에 담긴 인형이 같으면 터트리고 아니면 넣어준다.
                if(!basket.empty() && basket.top() == cur)
                {
                    basket.pop();
                    answer += 2;    // 터트린 인형 카운트
                }
                else
                {
                    basket.push(cur);
                }
                board[move][moves[i]-1] = 0;
                break;
            }
        }
    }
    return answer;
}

int main(void)
{
    vector<vector<int> > board;
    vector<int> v;

    v.push_back(0);
    v.push_back(0);
    v.push_back(0);
    v.push_back(0);
    v.push_back(0);
    board.push_back(v);
    v.clear();

    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(3);
    board.push_back(v);
    v.clear();

    v.push_back(0);
    v.push_back(2);
    v.push_back(5);
    v.push_back(0);
    v.push_back(1);
    board.push_back(v);
    v.clear();

    v.push_back(4);
    v.push_back(2);
    v.push_back(4);
    v.push_back(4);
    v.push_back(2);
    board.push_back(v);
    v.clear();

    v.push_back(3);
    v.push_back(5);
    v.push_back(1);
    v.push_back(3);
    v.push_back(1);
    board.push_back(v);
    v.clear();
    
    //                                = { {0, 0, 0, 0, 0},
    //                               {0, 0, 1, 0, 3},
    //                               {0, 2, 5, 0, 1},
    //                               {4, 2, 4, 4, 2},
    //                               {3, 5, 1, 3, 1} };   

    vector<int> moves; // = {1,5,3,5,1,2,1,4};
    moves.push_back(1);
    moves.push_back(5);
    moves.push_back(3);
    moves.push_back(5);
    moves.push_back(1);
    moves.push_back(2);
    moves.push_back(1);
    moves.push_back(4);


    solution(board, moves);

    return 0;
}