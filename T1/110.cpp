//輸入a,b,c
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	int a, b, c;

    cin >> a >> b >> c;
    if (a >= 60 && a < 100){
        cout << "1" << endl;
    }
    else{
        cout << "0" << endl;
    }
    cout << setprecision(2) << fixed << (b+1)/10.0 << endl;
    if (a >= c){
        cout << a << endl;
    }
    else{
        cout << c << endl;
    }

    //-----
	scanf("%d %d %d", &a, &b, &c);
	if(a>=60 && a<100) printf("1\n");
	else printf("0\n");
	printf("%.2f\n", (b+1)/10.0);
	if(a>=c) printf("%d", a);
	else printf("%d", c);
}