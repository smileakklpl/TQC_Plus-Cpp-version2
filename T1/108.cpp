//圓的直徑
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	int n;
    float c = 0.2;

    cin >> n;
    cout << n << endl;
    cout << setprecision(2) << fixed << n/2.0 << endl;
    cout << setprecision(4) << fixed << (n/2.0)*(n/2.0)*3.1415 << endl;

    //-----
	scanf("%d", &n);
	printf("%-10d\n%-10.2f\n%-10.4f", n, n/2.0, (n/2.0)*(n/2.0)*3.1415);
}