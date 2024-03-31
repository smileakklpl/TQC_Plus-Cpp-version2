//題目: 找出質數
//輸入: 整數n
//輸出: 0~n之間的所有值數
#include <iostream>  
#include <cstring>    

using namespace std;

int main() {  
    int n;

    cin >> n;
    bool prime[n];

    memset(prime, true, sizeof(prime));

    prime[0] = false;
    prime[1] = false;

    for(int i = 2; i < n; i++){
        if(prime[i] == true){
            for(int j = i * 2; j < n; j += i ){
                prime[j] = false;
            }
        }
    }
    for(int i = 2; i < n; i++){
        if(prime[i] == true){
            cout << i << ' ';
        }
    }

}
