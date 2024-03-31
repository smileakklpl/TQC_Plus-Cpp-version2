//輸入一數字
//找值數相乘
#include <iostream>

using namespace std;

int compute(int n);

int main(){
    int n;
    cin >> n;
    while(n != 1){
        for(int i = 2; i <= n; i++){
            if(n % i == 0){
                cout << i;
                n /=i;
                break;;
            }
        }
        if(n > 1){
            cout << '*';
        }

    }
}