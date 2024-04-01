//題目: 二進制相加
//輸入: char a, b 兩二進制數字 例: 00000100 00101000
//輸出: 相加後的十進制數字 與二進制
#include <iostream>
#include <cmath>

using namespace std;

int main(){
    char a[9],b[9];
    int suma = 0 ,sumb = 0;

    cin >> a >> b;

    for(int i = 0; i < 8 ;i++){
        if(a[i] == '1'){
            suma += pow(2,7-i);}
        if(b[i] == '1'){
            sumb += pow(2,7-i);}
    }
    int sum = suma + sumb;
    cout << suma << " + " << sumb << " = " << sum << endl;

    char ans[9];
    for(int i = 7; i >= 0; i--){
        if(sum - pow(2,i) >= 0){
            ans[i] = '1';
            sum -= pow(2,i);
        }
        else{
            ans[i] = '0';
        }
    }
    for(int i = 7; i >= 0; i--){
        cout << ans[i];
    }
}