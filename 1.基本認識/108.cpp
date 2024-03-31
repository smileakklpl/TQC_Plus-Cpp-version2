//題目：圓的直徑
//輸入：直徑n
//輸出：直徑、半徑(小數點後2位)、圓周率(小數點後4位)
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	int n;

    cin >> n;
    cout << n << endl;
    cout << setprecision(2) << fixed << n/2.0 << endl;
    cout << setprecision(4) << fixed << (n/2.0)*(n/2.0)*3.1415 << endl;
}