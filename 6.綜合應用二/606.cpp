//輸入前五數，並對第六個字母進行判別
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
