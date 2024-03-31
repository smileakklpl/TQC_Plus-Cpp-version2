//最大公因數
//輸入 a、b，輸出 a、b 的最大公因數和最小公倍數。
#include <iostream>

using namespace std;

int main(){
	int a, b, c;
    int aa, bb;

    cin >> a >> b;
    aa = a, bb = b;

    while(b != 0){
        c = a%b;
        a = b;
        b = c;
    }
    cout << a << endl;
    cout << (aa * bb) / a << endl;

}