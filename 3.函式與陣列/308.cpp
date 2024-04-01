//題目: 費氏數列
//輸入: 整數n
//輸出: 到n的費氏數列(用function寫) *輸出格式如下 fib(1)=1
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
}