//題目: FIFO（First In First Out）先進先出演算法
//輸入: 10個數字
//輸出: 10數字在FIFO演算法中的過程(視窗大小為4)
#include <iostream>

using namespace std;

struct Frame{
    int frame, myTime;
};

void FIFO(Frame *frame, int *p){
    int j = 0, count, sw = 10;
    for(int i = 0; i < 10; i++){
        j = 0;
        while(p[i] != -1){
            if(frame[j].frame == 0){
                frame[j].frame = p[i];
                frame[j].myTime = i;
                p[i] = -1;
            }
            else if(frame[j].frame == p[i]){
                frame[j].myTime = i;
                p[i] = -1;
            }
            else if(j == 3){
                for(int k = 0; k < 4; k++){
                    if(frame[k].myTime < sw){
                        sw = frame[k].myTime;
                        count = k;
                    }
                }
                frame[count].frame = p[i];
                frame[count].myTime = i;
                p[i] = -1;
                sw = 10;
            }
        j++;
        }
    for (j = 0; j < 4; j++)
        cout << frame[j].frame << " ";
    cout << endl;
    }
}

int main(){
    int p[10];
    
    for(int i = 0; i < 10; i++){
        cin >> p[i];
    }
    Frame frame[4];
    for(int i = 0; i < 4; i++){
        frame[i].frame = 0;
    }
    FIFO(frame,p);
}