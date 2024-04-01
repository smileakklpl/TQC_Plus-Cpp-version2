//題目: 期中考分數
//輸入: 整數socre
//輸出: 調整過後的分數(用function寫)
#include <iostream>

using namespace std;

int compute(int);

int main(){
	int score, final;

    cin >> score;
    cout << compute(score) << endl;
}

int compute(int score){
    if(score < 0 || score > 100){
        return -1;
    }
    else if(score >= 60){
        score += 5;
    }
    else{
        score += 10;
    }
    return score;
}
