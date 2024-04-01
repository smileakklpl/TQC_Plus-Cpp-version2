//題目: 字母出現次數
//輸入: 字串input(限制50個字元)
//輸出: 出現次數最多的字母與次數
#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int n[26] = {0};
    char input[50];

    cin >> input;

    for (int i = 0; i < strlen(input); i++){
        n[input[i] - 'a']++;
    }

    int max = 0, position;
    for (int i = 0; i < 26; i++){
        if (n[i] > max){
            max = n[i];
            position = i;
        }
    }

    cout << static_cast<char>(position + 'a') << endl;
    cout << max << endl;
}