//輸入：字串。
//輸出：大寫分離，小寫分離，大寫字數。
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