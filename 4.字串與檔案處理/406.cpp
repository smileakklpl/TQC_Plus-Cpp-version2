//輸入英文 輸出件盤的右一位
#include <iostream>

using namespace std;

int main(){
    char input[50];

    char lower[] = "qwertyuioppasdfghjkllzxcvbnmm";
    char upper[] = "QWERTYUIOPPASDFGHJKLLZXCVBNMM";

    cin >> input;

    for (int i = 0; i < strlen(input); i++){
        if (input[i] >= 'A' && input[i] <= 'Z'){
            for (int j = 0; j < strlen(upper); j++){
                if (input[i] == upper[j]){
                    input[i] = upper[j+1];
                    break;
                }
            }  
        }
        else if (input[i] >= 'a' && input[i] <= 'z'){
            for (int j = 0; j < strlen(lower); j++){
                if (input[i] == lower[j]){
                    input[i] = lower[j+1];
                    break;
                }
            }  
        }
    }
    cout << input << endl;
}