//輸入：整數n n個整數。
//輸出：出現次數大於n/2的數。(若無輸出error)
#include <iostream>

using namespace std;

int main(){
    int n, input, point = 0, mark; //point的作用在於擴充array的範圍
    cin >> n;
    int num[n], appear[n + 1];

    memset(appear, 0, sizeof(appear));

    for(int i = 0; i < n; i++){
        cin >> input;
        mark = 0;
        for(int j = 0; j < point; j++){
            if(num[j] == input){
                appear[j] += 1;
                mark = 1;
                break;
            }
        }
        if(mark == 0){
            num[point] = input;
            appear[point]++;
            point++;
        }
    }
    for(int i = 0; i < n; i++){
        if(appear[i] > n/2){
            cout << num[i] << endl;
            return 0;
        }
    }
    cout << "error" << endl;
}