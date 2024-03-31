//題目：蘋果汁1瓶23.34元
//輸入：數字n瓶
//輸出：價格(控制小數點後2位)
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int n;

    cin >> n ;
    cout << setprecision(2) << fixed << n*23.34 << endl;
}