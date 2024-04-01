//題目: 計算3的倍數出現次數
//輸入: 含6個整數的array
//輸出: array裡有多少3的倍數(用function寫)
#include <iostream>

using namespace std;

int compute(int array[]){
    int n = 0;
    for (int i = 0; i < 6; i++){
        if (array[i] % 3 == 0){
            n++;
        }
    }
    return n;
}

int main(){
    int n, array[6];
    for (int i = 0; i < 6; i++){
        cin >> array[i];
    }
    cout << compute(array) << endl;
}