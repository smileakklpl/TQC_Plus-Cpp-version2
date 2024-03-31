//棒球得分
#include <iostream>

using namespace std;

int main(){
    int n,score = 0,base[3] = {0};

    for(int i = 0; i < 10; i++){
        cin >> n;
        for(int j = 2; j >=0; j--){
            if(base[j] == 1){
                base[j] = 0;
                if(j + n < 3){
                    base[j + n] = 1;
                }
                else{score ++;}
            }
        }
        base[n - 1] = 1;
        if(n == 4){
            score ++;
        }
    }
    cout << "socre = " << score << endl;
}