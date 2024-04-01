//題目: 印出*號
//輸入: 整數n, m 組成一個矩陣nxm 並億次輸入值
//輸出: 若矩陣的上下左右的值為0，輸出' ',其餘輸出'*'
#include <iostream>

using namespace std;

int main(){
    int n,m,input;
    cin >> n >> m;

    int matrix[n+2][m+2];

    for(int i = 1; i < n+1; i++){
        for(int j = 1; j < m+1; j++){
            cin >> matrix[i][j];
        }
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <=m; j++){
            if(matrix[i][j] == 0){
                cout << ' ';
            }
            else if(matrix[i][j-1] == 0 || matrix[i-1][j] == 0 || matrix[i+1][j] == 0 || matrix[i][j+1] == 0){
                cout << '*';
            }
            else{
                cout << ' ';
            }   
        }
        cout << endl; 
    }
}