#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
    double num; // 用於存儲用戶輸入的數字

    while (1) {
        printf("Please input a number: ");
        scanf(" %lf", &num); // 讀取用戶輸入的數字

        // 如果輸入為 0，結束程序
        if (num == 0) {
            break;
        }
        
        // 判斷輸入的數字是否為整數
        if (num == (int)num) {
            // 輸出結果，說明該數為整數
            printf("% d is an integer.\n\n", (int)num);
        } else {
            // 輸出結果，說明該數為浮點數
            printf("% f is a float-point number.\n\n", num);
        }
    }

    return 0;
}