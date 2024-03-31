//題目: 分數加分
//輸入: 整數n
//輸出: 加分後的分數
#include <iostream>

using namespace std;

int main(){
	int n;
    cin >> n;
    if(n < 0 || n > 100){
        cout << "error";
    }
    else if(n > 60){
        cout << n + 10;
    }
    else{
        cout << n + 5;
    }
}