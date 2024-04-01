//題目: 分離大小寫
//輸入: 字串a(限制10個字元)
//輸出: 字串的大寫、小寫、大寫的字數
#include <iostream>
#include <string>

using namespace std;

int main(){
    char a[10];
    int count = 0; 

    cin >> a; 

    for(int i = 0; i < strlen(a); i++){
        if(isupper(a[i])){
            cout << a[i];
            count ++;
        }
    }
    cout << endl;
    for(int i = 0; i < strlen(a); i++){
        if(islower(a[i])){
            cout << a[i];
        }
    }
    cout << endl << count;
}