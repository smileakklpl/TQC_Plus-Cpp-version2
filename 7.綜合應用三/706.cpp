//題目: 讀取當案並寫入
//輸入: 4個整數，讀取 read.txt。
//輸出: 由小到大排序，寫入 write.txt並輸出
#include <iostream>
#include <fstream>

using namespace std;

int main(){
    int array[100];
    int value = 0,count = 4, storage;

    ifstream input_file;
    input_file.open("read.txt");
    ofstream output_file("write.txt");

    for(int j = 0; j < 4; j++){
        cin >> array[j];
    }

    while(input_file >> value){
        array[count] = value;
        count++;
    }

    for(int i = 0; i <  count; i++){
        for(int j = i; j < count; j++){
            if(array[i] > array[j]){
                storage = array[i];
                array[i] = array[j];
                array[j] = storage;
            }
        }
    }

    for(int i = 0; i < count; i++){
        cout << array[i] << endl;
        output_file << array[i] << endl;
    }
    input_file.close();
    output_file.close();
}