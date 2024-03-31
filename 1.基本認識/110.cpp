//題目: 3整數與條件判斷
//輸入: 整數a, b, c
//輸出: 一些判斷式如下
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	int a, b, c;

    cin >> a >> b >> c;
    if(a >= 60 && a < 100){
        cout << "1" << endl;
    }
    else{
        cout << "0" << endl;
    }
    cout << setprecision(2) << fixed << (b+1)/10.0 << endl;
    if(a >= c){
        cout << a << endl;
    }
    else{
        cout << c << endl;
    }
}