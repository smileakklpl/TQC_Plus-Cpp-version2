//題目: 迴文數判斷
//輸入: 整數n
//輸出: 判斷是否為迴文數(yes/no) *迴文數: 12321

#include <iostream>

using namespace std;

int main(){
    int n,b=0,a;
    cin >> n;
    a = n;

    while(n != 0){
        b = b*10 + n%10;
        n /= 10;
    }

    if(a == b){
        cout << "yes" << endl;
    }
    else{
        cout << "no" << endl;
    }
}