//質數
#include <iostream>   // 包含輸入輸出流函式庫
#include <cstring>    // 包含字串操作函式庫

using namespace std;

int main() {  // 主函式的開始
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
