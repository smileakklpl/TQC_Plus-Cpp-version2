//題目: 判斷阿姆斯壯數
//輸入: 整數n
//輸出: 1到整數n之間的所有阿姆斯壯數(用function寫) 
#include <iostream>
#include <cmath>

using namespace std;

int compute(int n){
    int amos = 0, count = 0, run_num;

    if (n < 10){
        cout << n << endl;
        return 0;
    }
    run_num = n;
    while (run_num > 0){
        count += 1;
        run_num /= 10;
    }

    run_num = n;
    while (run_num > 0){
        amos += static_cast<int>(pow(run_num%10,count));
        run_num /= 10;
    }


    if (amos == n){
        cout << n << endl;
        return 0;
    }
    return 0;
}

int main(){
    int n;
    cin >> n;
    if (n > 0 && n < 1000){
        for (int i = 1; i <= n; i++){
            compute(i);
        }
    }
    else{cout << "error" << endl;}
}