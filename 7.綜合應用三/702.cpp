//題目: 2進制轉10進制
//輸入: char sum 2進制字串
//輸出: 轉換過的10進制數字
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(){
    char num[10];
    int sum = 0;

    cin >> num;
    for(int i = 0; i < strlen(num); i++){
        if(num[i] == '1'){
            sum += pow(2, strlen(num) - 1 -i);
        }
    }
    cout << sum;
}