//題目: 字串反轉
//輸入: 字串str1, str2(長度必須大於3且小於20)
//輸出: 兩字串的長度，並將兩字串連接後反轉輸出
#include <iostream>
#include <cstring>

using namespace std;

void compute(char n[]);

int main() {
    char str1[20],str2[20],str_com[40];
    cin >> str1 >> str2;

    if (strlen(str1) <= 3 || strlen(str1) >20 || strlen(str2) <= 3 || strlen(str2) >20){
        cout << "error" << endl;
    }
    else{
        cout << strlen(str1) << endl << strlen(str2) << endl;
        strcpy(str_com,str1); //string copy
        strcat(str_com,str2); //string concatenate
        compute(str_com);
    }
}

void compute(char n[]){
    int len = strlen(n);
    for(int i = len - 1; i > -1; i--){
        cout << n[i];
    }
}