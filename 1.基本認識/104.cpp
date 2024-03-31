//題目：兩float相加
//輸入：兩float
//輸出：兩float相加(小數點後2位)
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    float a,b;

    cin >> a >> b;
    cout << setprecision(2) << fixed << a+b << endl;
}