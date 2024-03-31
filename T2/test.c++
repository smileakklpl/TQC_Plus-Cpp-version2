#include <iostream>

using namespace std;

int main(){
    int n;

    int a, b, c, aa, bb;

    cin >> a >> b;
    aa = a,bb = b;
    while (b != 0)
    {
        c = a%b;
        a = b;
        b = c;
    }
    cout << a << endl;
    cout << (aa*bb)/a << endl;
    


}