//題目: 數字乘法 
//輸入: 整數num
//輸出: num每一位的相乘 *格式 a*b*c=d
#include <iostream>

using namespace std;

int main(){

    int num,a[10],sum = 1, i = 0;
    cin >> num;

    if(num == 0){
        cout << "0=0" << endl;
    }
    else{
        while(num > 0){
            a[i] = num % 10;
            sum *= a[i];
            num /= 10;
            i ++;
        }
        for(int j = i - 1; j >= 0; j--){
            cout << a[j];
            if(j != 0){
                cout << '*';
            }
        }
        cout << '=' << sum << endl;
    }
} 