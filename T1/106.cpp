//兩點距離
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
    int a, b, c, d;

    cin >> a >> b >> c >> d;
    cout << setprecision(2) << fixed << (sqrt(pow(a-c,2)+pow(b-d,2)));
}