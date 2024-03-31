//輸入兩矩陣,做乘法
#include <iostream>

using namespace std;

int main(){
    int a1, a2, b1, b2;
    cin >> a1 >> b1;
    int matrix_a[a1][b1];
    for(int i = 0; i < a1; i++){
        for(int j = 0; j < b1; j++){
            cin >> matrix_a[i][j];
        }
    }
    cin >> a2 >> b2;
    int matrix_b[a2][b2];
    for(int i = 0; i < a2; i++){
        for(int j = 0; j < b2; j++){
            cin >> matrix_b[i][j];
        }
    }
    int matrix_sum[a1][b2], sum = 0;
    if(a2 != b1){
        cout << "error" << endl;
    }
    else{
        for(int i = 0; i < a1; i++){
            for(int j = 0; j < b2; j++){
                sum = 0;
                for(int k = 0; k < b1; k++){
                    sum += matrix_a[i][k] * matrix_b[k][j];
                }
                matrix_sum[i][j] = sum;
            }
        }
    }
    for(int i = 0; i < a1; i++){
        for(int j = 0; j < b2; j++){
            if(j != 0){
                cout << ' ';
            }
            cout << matrix_sum[i][j];
        }
        cout << endl;
    }
}