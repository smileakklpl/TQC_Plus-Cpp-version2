//array加總，升序輸出
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