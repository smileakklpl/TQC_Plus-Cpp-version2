//題目: array排序
//輸入: array(限制9個int)
//輸出: array加總，由小到大輸出
#include <iostream>

using namespace std;

int main(){
    int array[9], sum = 0, storage;

    for(int i = 0; i < 9; i++){
        cin >> array[i];
        sum += array[i];
    }

    for(int i = 0; i < 9; i++){
        for(int j = i; j < 9; j++){
            if(array[i] > array[j]){
                storage = array[i];
                array[i] = array[j];
                array[j] = storage;
            }
        }
    }

    for(int i = 0; i < 9; i++){
        cout << array[i] << endl;
    }
    cout << "sum = " << sum;
}