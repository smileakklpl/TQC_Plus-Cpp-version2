//題目: 因數分解
//輸入: 整數n
//輸出: 因數分解 *格式 2*2*3
#include <iostream>

using namespace std;

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