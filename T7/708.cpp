//輸入三個時間,小時接續分鐘 24小時制
//判斷是上午還是下午，輸出相應的時間格式，輸出上午時間的數量
#include <iostream>

using namespace std;

struct Time{
    int hour, minute;
};

void compute(Time time[]);

int main(){

    Time time[3];

    for(int i = 0; i < 3; i++){
        cin >> time[i].hour >> time[i].minute;
    }
    compute(time);
}

void compute(Time time[]){
    int am = 0;

    for(int i = 0; i < 3; i++){
        if(time[i].hour >= 0 && time[i].hour <= 11){
            am++;
            if(time[i].hour == 0){
                cout << "AM 12:" << time[i].minute << endl;
            }
            else{
                cout << "AM " << time[i].hour << ':' << time[i].minute << endl;
            } 
        }
        else{
            if(time[i].hour == 12){
                cout << "PM 12:" << time[i].minute << endl;
            }
            else{
                cout << "PM " << time[i].hour << ':' << time[i].minute << endl;
            } 
        }
    }
    cout << am << endl;
}