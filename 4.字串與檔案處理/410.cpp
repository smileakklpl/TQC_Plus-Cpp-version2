//題目: 讀取read.txt中的文字並將首字母轉大寫後，輸出至write.txt中
//輸入: read.txt
//輸出: write.txt(首字母轉大寫)
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
    ifstream read_file("read.txt");
    ofstream write_file("write.txt");
 
    int n;
    char s[100];
    while(read_file.getline(s,100)){
        for(int i = 0; i < strlen(s); i++){
            s[0] = toupper(s[0]);
            if(s[i-1] == ' '){
                s[i] = toupper(s[i]);
            }
        }
        cout << s <<endl;
        write_file << s << endl;
    }
    read_file.close();
    write_file.close();

}