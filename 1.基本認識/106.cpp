//題目：兩點距離公式
//輸入：兩點(x1,y1) (x2,y2)
//輸出：兩點距離(小數點後2位)
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
    int x1, y1, x2, y2;

    cin >> x1 >> y1 >> x2 >> y2;
    cout << setprecision(2) << fixed << (sqrt(pow(x1-x2,2)+pow(y1-y2,2)));
}