//輸入兩字串，輸出兩字串的長度，並將兩字串相加後反向輸出
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
        strcpy(str_com,str1); //重要  複製 string copy
        strcat(str_com,str2); //重要  連接 string concatenate
        compute(str_com);
    }
}

void compute(char n[]){
    int len = strlen(n);
    for(int i = len - 1; i > -1; i--){
        cout << n[i];
    }
}