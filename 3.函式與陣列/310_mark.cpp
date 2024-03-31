//阿姆斯壯數
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
        run_num /= 10; //count等於該int的位數
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

