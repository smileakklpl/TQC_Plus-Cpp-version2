#include <iostream> // 包含輸入輸出流函式庫
using namespace std;

// 定義 Frame 結構體
struct Frame {
    int frame;
    int myTime;
};

// FIFO 置換算法函式
void FIFO(Frame *frame, int *p) {
    int i = 0, j = 0, k = 0, sw = 10, index = 0;
    // 遍歷 p 數組，進行置換
    for (i = 0; i < 10; i++) {
        j = 0;
        // 如果 p[i] 不為 -1，則進行置換
        while (p[i] != -1) {
            // 如果 frame[j].frame 為 0，則將 p[i] 放入 frame[j] 中
            if (frame[j].frame == 0) {
                frame[j].frame = p[i];
                frame[j].myTime = i;
                p[i] = -1;
            } else if (frame[j].frame == p[i]) { // 如果 frame[j] 已經存在 p[i]，則將 p[i] 設置為 -1
                p[i] = -1;
            } else if (j == 3) { // 如果 frame 已滿，則根據 FIFO 置換算法找到最早進入的頁框進行置換
                for (k = 0; k < 4; k++) {
                    if (frame[k].myTime < sw) {
                        sw = frame[k].myTime;
                        index = k;
                    }
                }
                frame[index].frame = p[i];
                frame[index].myTime = i;
                p[i] = -1;
                sw = 10;
            }
            j++;
        }
        // 輸出當前頁框的狀態
        for (j = 0; j < 4; j++)
            cout << frame[j].frame << " ";
        cout << endl;
    }
}

int main() {
    int i, p[10];
    // 讀取 p 數組的值
    for (i = 0; i < 10; i++)
        cin >> p[i];
    Frame frame[4]; // 創建 Frame 數組 frame，用於表示四個頁框
    // 初始化每個頁框的 frame 成員為 0
    for (i = 0; i < 4; i++)
        frame[i].frame = 0;
    // 執行 FIFO 置換算法
    FIFO(frame, p);
    return 0;
}
