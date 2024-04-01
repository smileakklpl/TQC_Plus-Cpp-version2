//題目: 身分證
//輸入: char id *格式 12345D 23423U
//輸出: 判別前五個數經過一些判斷式後，是否跟第六個字母的字元常數相同
#include <iostream>

using namespace std;

int main(){
    char id[3][7];

    for(int i = 0; i < 3; i++){
        cin >> id[i];
        if(((id[i][0] + id[i][2] + id[i][4] - 48 * 3 ) + (id[i][1] + id[i][3] - 48 * 2)*5) % 26 == id[i][5] - 64){
            cout << "Pass" << endl;
        }
        else{
            cout << "Fail" << endl;
        }
    }
}
