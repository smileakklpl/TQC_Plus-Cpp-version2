//題目: 比對兩字串的ASCII碼
//輸入: 字串str1, str2(128字元以內), 整數n
//輸出: 兩字串前n個字元的ASCII碼大小
#include <iostream>
#include <cstring>

using namespace std;

int main(){
    char str1[128];
    char str2[128];

    int n;
    cin >> str1 >> str2 >> n;

    int result = strncmp(str1, str2, n); //string number compare

    if (n <= strlen(str1)){
        if (result == 0){
            cout << str1 << '=' << str2 << endl;
        } 
        else if (result > 0){
            cout << str1 << '>' << str2 << endl;
        }
        else{
            cout << str1 << '<' << str2 << endl;
        }
    }
    else{
        cout << "error" << endl;
    }
}