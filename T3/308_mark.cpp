//費氏數列
#include <iostream>

using namespace std;

int compute(int n){
    if (n <= 2){
        return 1;
    }
    else{
        return compute(n-1) + compute(n-2);
    }
}

int main(){
    int n, a[10];
    cin >> n;

    for (int i = n; i >= 1; i--){
        a[i] = compute(i);
    }
    for (int i = n; i >= 1; i--){
        cout << "fib(" << i << ")=" << a[i] << endl; 
    }
    /*
    for (int i = n; i >= 1; i--){
        cout << "fib(" << i << ")=" << compute(i) << endl; 
    }
    */
}




//printf("fib(%d)=%d\n",i+1,a[i]);


