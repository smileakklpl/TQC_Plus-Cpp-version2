//2禁制轉10進制
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(){
    char num[10];
    int sum = 0;

    cin >> num;
    for(int i = 0; i < strlen(num); i++){
        if(num[i] == '1'){
            sum += pow(2, strlen(num) - 1 -i);
        }
    }
    cout << sum;
}