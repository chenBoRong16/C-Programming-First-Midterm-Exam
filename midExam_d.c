#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// 清空輸入緩衝區
void cleanInputBuffer() {
    char ch;
    while ((ch = getchar()) != '\n');
}

// 將十進制數字轉換為指定進制表示
void convertToBase(int number, int base) {
    int storage[20]; // 用於存儲轉換後的結果
    int i = 0;
    
    // 逐位計算餘數並存入數組
    while (number > 0) {
        storage[i++] = (number % base);
        number /= base;
    }

    // 倒序輸出結果
    for (int k = i - 1; k >= 0; k--) {
        if (storage[k] >= 10) {
            printf("%c", storage[k] + 'A' - 10); // 將數字轉換為字母（如 A, B, C 等）
        } else {
            printf("%d", storage[k]); // 輸出小於 10 的數字
        }
    }
    printf(".\n\n");
}

int main() {
    int number;
    int base;

    while (1) {
        printf("Please input a pair of integers(M,N) : ");
        // 檢查輸入格式是否正確
        if (scanf("(%d,%d)", &number, &base) != 2) {
            printf("Wrong input, input again!\n\n");
            cleanInputBuffer();
            continue;
        }
        
        // 如果輸入為 (0,0)，結束程序
        if ((number == 0) && (base == 0)) {
            printf("Go to next question\n");
            break;
        }
        
        // 檢查進制是否在有效範圍內
        if ((base < 2) || (base > 16)) {
            printf("Wrong input, input again!\n\n");
            cleanInputBuffer();
            continue;
        }
        
        // 檢查數字是否在有效範圍內
        if ((number < 1) || (number > 65535)) {
            printf("Wrong input, input again!\n\n");
            cleanInputBuffer();
            continue;
        }
        
        cleanInputBuffer();

        // 打印轉換結果
        printf("%d in base %d is ", number, base);
        convertToBase(number, base);
    }
    
    return 0;
}