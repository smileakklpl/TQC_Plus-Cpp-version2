//題目: 最大公因數
//輸入整數a, b
//輸出a, b的最大公因數和最小公倍數
#include <iostream>

using namespace std;

int main(){
	int a, b, c;
    int copy_a, copy_b;

    cin >> a >> b;
    copy_a = a, copy_b = b;

    while(b != 0){
        c = a%b;
        a = b;
        b = c;
    }
    cout << a << endl;
    cout << (copy_a * copy_b) / a << endl;

}